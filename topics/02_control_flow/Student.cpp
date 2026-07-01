#include "Student.h"
#include <string>
using namespace std;

// Initialize the name directly, then reuse setAverage() to apply validation.
Student::Student(string studentName, int studentAverage) : name(studentName) {
    setAverage(studentAverage);
}


// Replace the stored student name.
void Student::setName(string studentName) {
    name = studentName;
}

// Return the stored name.
string Student::getName() const {
    return name;
}

// Accept only averages in the 1..100 range and ignore invalid input.
void Student::setAverage(int studentAverage) {
    if (studentAverage > 0 && studentAverage <= 100)
        average = studentAverage;
}

// Return the stored numeric average.
int Student::getAverage() const {
    return average;
}

// Map the numeric average to a standard letter grade.
string Student::letterGrade() const {
    string lg;

    if (average >= 90)
        lg = "A";
    else if (average >= 80)
        lg = "B";
    else if (average >= 70)
        lg = "C";
    else if (average >= 60)
        lg = "D";
    else
        lg = "F";
    
    return lg;
}
