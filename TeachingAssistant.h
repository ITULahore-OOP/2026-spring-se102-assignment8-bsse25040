#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    int workingHours;
public:
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);

    void displayRole() const override;

    // Compile-time polymorphism
    void gradeAssignment(int score);
    void gradeAssignment(const std::string& letterGrade);
};

#endif