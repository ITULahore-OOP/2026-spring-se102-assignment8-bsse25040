#include "TutoringSession.h"
#include <iostream>

//constructor:
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student)
    : sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student) {}

//getter
double TutoringSession::getDuration() const { return durationMinutes; }

//display
void TutoringSession::displaySession() const {
    cout << "Session ID: " << sessionID<< ", Duration: " << durationMinutes << " mins"
    << ", TA: " << ta->getName()<< ", Student: " << student->getName() <<endl;
}

//operator overloading
TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    return TutoringSession(sessionID, durationMinutes + other.durationMinutes, ta, student);
}

bool operator>(TutoringSession s1, TutoringSession s2) {
    return s1.durationMinutes > s2.durationMinutes;
}