#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <utility>
using namespace std;

template <typename T>
void DisplayVector(const vector<T>& vec);

int main() {

    // Range 1..n (inclusive)
    int n = 10;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1); // starts at 1, fills n elements
    
    cout << "Range 1.." 
         << n << " (inclusive)" 
         << endl;
    DisplayVector(v);

    // Range a..n
    int a = 5;
    vector<int> v2(n - a + 1);
    iota(v2.begin(), v2.end(), a);

    cout << "\nRange " << a << ".." 
         << n << " (inclusive)" 
         << endl;
    DisplayVector(v2);

    // Stepped range with iota - workaround -- a - end with step (exclusive)
    a = 2;
    int end = 20, step = 3;
    int count = (end - a + step - 1) / step;
    vector<int> v3(count);
    iota(v3.begin(), v3.end(), 0); // fill indicies 

    ranges::transform(
        v3, // the range
        v3.begin(),  // where to start writing
        [a, step](int i) {return a + i * step;} // Lambda expression
    );

    cout << "\nStepped range from " << a 
         << " .. " << end << " (Step " 
         << step << ") - Exlcusive" << endl;
    DisplayVector(v3);


        // Stepped range with iota - workaround -- a - end with step (inclusive)
    a = 2;
    end = 20; step = 3;
    count = (end - a + step - 1) / step;
    vector<int> v4(count+1); // add one more for the end
    iota(v4.begin(), v4.end(), 0); // fill indicies 

    // requires <algorithm>
    ranges::transform(v4, v4.begin(), [&a = as_const(a), &step = as_const(step)](int i) { 
        return a + i * step;
    });

    cout << "\nStepped range from " << a 
         << " .. " << end << " (Step " 
         << step << ") - Inclusive" << endl;
    DisplayVector(v4);
    
}

template <typename T>
void DisplayVector(const vector<T>& vec) {
    for (const auto&i : vec)
        cout << i << " ";
    cout << endl;
}