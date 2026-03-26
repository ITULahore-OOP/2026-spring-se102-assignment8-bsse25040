#include "TeachingAssistant.h"
#include <iostream>

//constructor:
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberID), Student(name, memberID, cgpa), Staff(name, memberID, salary, card), workingHours(workingHours) {}

//display
void TeachingAssistant::displayRole()const {
    cout << "Role: Teaching Assistant" <<endl;
}

void TeachingAssistant::gradeAssignment(int score) {
    cout << "numeric score: " << score << "/100" <<endl;
}

void TeachingAssistant::gradeAssignment(const std::string& letterGrade) {
    cout << "letter grade: " << letterGrade <<endl;
}