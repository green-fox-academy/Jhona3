//
// Created by Jonas on 2019. 04. 23..
//

#ifndef GREENFOX_MENTOR_H
#define GREENFOX_MENTOR_H

#include "Person.h"
enum Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);
    void getGoal() override;
    void introduce() override;
    std::string getLevelAsString();

private:
    Level _level;
};


#endif //GREENFOX_MENTOR_H
