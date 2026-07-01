#include <print>
using namespace std;

#include "Student.h"

int main() {

    Student account1{"Jane Doe", 93};
    Student account2{"John Blue", 72};

    print("{0}'s letter equivalent garde of {1} is: {2}\n", 
        account1.getName(), account1.getAverage(), account1.letterGrade());

    print("{0}'s letter equivalent garde of {1} is: {2}\n", 
        account2.getName(), account2.getAverage(), account2.letterGrade());

    return 0;

}
