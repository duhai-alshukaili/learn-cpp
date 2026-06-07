#include <print>
#include <iostream>
using namespace std;

int main() {

    int number1{0};
    int number2{0};
    int sum{0};

    print("Enter first integer :.... ");
    cin >> number1;
    cin.ignore(80, '\n');

    print("Enter second integer:.... ");
    cin >> number2;
    cin.ignore(80, '\n');

    sum = number1 + number2;
    println("\nThe sum is {0}.", sum);

    return 0;
}