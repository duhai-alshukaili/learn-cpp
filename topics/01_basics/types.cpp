#include <print>
#include <typeinfo>
using namespace std;

int main() {
    auto age{42};         // int
    double price{19.99};  // double
    auto name{"Ada"};     // const char*

    println("Age is {0}.\nPrice is {1}.\nName is {2}\n", age, price, name);

    println("Type ID of Age is {0}", typeid(age).name());
    println("Type ID of Price is {0}", typeid(price).name());
    println("Type ID of Name is {0}", typeid(name).name());

    return 0;
}