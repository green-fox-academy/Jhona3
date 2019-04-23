//
// Created by Jonas on 2019. 04. 23..
//

#ifndef GREENFOX_PERSON_H
#define GREENFOX_PERSON_H

#include <iostream>

enum Gender {
    Male,
    Female,
    Other
};

class Person {
public:
    Person(std::string name, int age, Gender gender);

    Person();

    virtual void introduce();

    virtual void getGoal();

    void setName(std::string &name);

    void setAge(int age);

    void setGender(Gender gender);

    std::string getGenderAsString();

protected:
    std::string _name;
    int _age;
    Gender _gender;

};


#endif //GREENFOX_PERSON_H
