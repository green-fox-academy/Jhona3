//
// Created by Jonas on 2019. 04. 23..
//

#ifndef GREENFOX_STUDENT_H
#define GREENFOX_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student(std::string name, int age, Gender gender, std::string previousOrganization);

    Student();

    void introduce() override;

    void getGoal() override;

    void skipDays(int numberOfDays);

private:
    int _skippedDays = 0;
    std::string _previousOrganization;
};


#endif //GREENFOX_STUDENT_H
