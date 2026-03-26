#include "Department.h"
#include <iostream>

//constructor:
Department::Department(string departmentName) : departmentName(departmentName), memberCount(0) {}

//add member
void Department::addMember(UniversityMember* member) {
    if (memberCount < 50) {
        members[memberCount++] = member;
    }
}

//display
void Department::displayAllRoles() const {
    std::cout << "Department: " << departmentName << std::endl;
    for (int i = 0; i < memberCount; i++) {
        members[i]->displayRole();
    }
}