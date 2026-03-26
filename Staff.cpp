#include "Staff.h"
#include <iostream>

//constructor:
Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), salary(salary), card(card) {}

//getters
double Staff::getSalary() const { return salary; }

//display
void Staff::displayRole() const {
    std::cout << "Role: Staff" <<endl;
}

void Staff::displayCard() const {
    card.displayCardInfo();
}