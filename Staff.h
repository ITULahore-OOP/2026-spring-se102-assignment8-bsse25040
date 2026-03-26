#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"
#include <string>
using namespace std;

class Staff : virtual public UniversityMember {
private:
    double salary;
    AccessCard card; // Composition
public:
    Staff(string name, int memberID, double salary, AccessCard card);

    double getSalary() const;
    void displayRole() const override;
    void displayCard() const;
};

#endif