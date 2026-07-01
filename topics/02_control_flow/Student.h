#pragma once

#include <string>
using namespace std;

// Represents a student with a name and numeric average.
class Student {
private:
    // Stores the student's name.
    string name;
    // Stores the student's average score as a percentage.
    int average{0};
public:
    // Create a student and validate the starting average through the setter.
    Student(string studentName, int studentAverge);
    
    // Update the student's name.
    void setName(string studentName);
    // Read the student's current name without modifying the object.
    string getName() const;

    // Update the average only if the provided value is in the valid range.
    void setAverage(int studentAverage);
    // Read the student's current numeric average.
    int getAverage() const;

    // Convert the numeric average into a letter grade.
    string letterGrade() const;
};
