#include <print>
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

bool readNonNegativeDouble(const string& prompt, const string& fieldName, double& value) {
    while (true) {
        print("{}", prompt);

        string line;
        if (!getline(cin, line)) {
            println("Input error: unable to read {}.", fieldName);
            return false;
        }

        istringstream input(line);
        double candidate{0.0};
        char extra{'\0'};

        if (!(input >> candidate)) {
            println("Invalid input: {} must be a number.", fieldName);
            continue;
        }

        if (input >> extra) {
            println("Invalid input: enter only one value for {}.", fieldName);
            continue;
        }

        if (candidate < 0.0) {
            println("Invalid input: {} cannot be negative.", fieldName);
            continue;
        }

        value = candidate;
        return true;
    }
}

int main() {
    double principal{0.0};
    double rate{0.0};

    if (!readNonNegativeDouble("Enter the initial principal: ", "principal", principal))
        return 1;

    if (!readNonNegativeDouble("Enter the interest rate: ", "interest rate", rate))
        return 1;

    println("\n{0:>5}{1:>20}", "Year", "Amount on deposit");

    for (int year{1}; year <= 10; ++year) {
        double amount = principal * pow(1 + rate, year);
        println("{0:>5d}{1:>20.2f}", year, amount);
    }
}
