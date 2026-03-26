#include "UniversityMember.h"
#include <iostream>

//constructor:
UniversityMember::UniversityMember(string name, int memberID) : name(name), memberID(memberID) {}

//destructor:
UniversityMember::~UniversityMember() {}

//getters:
string UniversityMember::getName() const { return name; }

int UniversityMember::getMemberID() const { return memberID; }