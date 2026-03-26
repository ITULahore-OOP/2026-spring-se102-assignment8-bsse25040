#include "Student.h"
#include <iostream>

//constructor:
Student::Student(string name, int memberID, double cgpa) : UniversityMember(name, memberID), cgpa(cgpa) {}

//getters
double Student::getCGPA() const { return cgpa; }

//update
void Student::updateCGPA(double newCGPA) { cgpa = newCGPA; }

//display
void Student::displayRole() const {
    cout << "Role: Student" <<endl;
}