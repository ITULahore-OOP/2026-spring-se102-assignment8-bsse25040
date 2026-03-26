#ifndef TUTORING_SESSION_H
#define TUTORING_SESSION_H

#include "TeachingAssistant.h"
#include "Student.h"

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;
public:
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);

    double getDuration() const;
    void displaySession() const;

    TutoringSession operator+(const TutoringSession& other);

    friend bool operator>(TutoringSession s1, TutoringSession s2);
};

#endif