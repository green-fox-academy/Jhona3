//
// Created by Jonas on 2019. 04. 23..
//

#ifndef GREENFOX_SPONSOR_H
#define GREENFOX_SPONSOR_H

#include "Student.h"

class Sponsor : public Person{
public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);
    void getGoal() override;
    void introduce() override;
    void hire();
private:
    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOX_SPONSOR_H
