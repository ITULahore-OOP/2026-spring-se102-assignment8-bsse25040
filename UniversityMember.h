#ifndef UNIVERSITY_MEMBER_H
#define UNIVERSITY_MEMBER_H

#include <string>
using namespace std;

class UniversityMember {
private:
    string name;
    int memberID;
public:
    UniversityMember(string name, int memberID);
    virtual ~UniversityMember();

    string getName() const;
    int getMemberID() const;

    virtual void displayRole() const = 0; // Pure virtual function
};

#endif