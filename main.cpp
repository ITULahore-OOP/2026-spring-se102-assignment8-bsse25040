#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"
#include <iostream>
using namespace std;

int main() {
    // Create AccessCards
    AccessCard card1("AC101", 2);
    AccessCard card2("AC102", 1);

    // Create Students
    Student s1("Alice", 101, 3.8);
    Student s2("David", 102, 3.5);

    // Create Staff
    Staff st1("Bob", 201, 50000, card1);
    Staff st2("Eve", 202, 45000, card2);

    // Create Teaching Assistant
    TeachingAssistant ta1("Charlie", 301, 3.9, 30000, card1, 20);

    // Create Department and add members
    Department compDept("Computer Science");
    compDept.addMember(&s1);
    compDept.addMember(&s2);
    compDept.addMember(&st1);
    compDept.addMember(&st2);
    compDept.addMember(&ta1);

    // Display all roles (Run-time polymorphism)
    compDept.displayAllRoles();

    // Demonstrate Compile-time polymorphism
    ta1.gradeAssignment(95);
    ta1.gradeAssignment("A");

    // Tutoring Sessions
    TutoringSession session1(1, 60, &ta1, &s1);
    TutoringSession session2(2, 45, &ta1, &s2);

    session1.displaySession();
    session2.displaySession();

    // Operator Overloading +
    TutoringSession combined = session1 + session2;
    combined.displaySession();

    // Operator Overloading >
    if (session1 > session2) {
        cout << "Session 1 is longer than Session 2\n";
    } else {
        cout << "Session 2 is longer or equal to Session 1\n";
    }

    return 0;
}