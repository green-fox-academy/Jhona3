//
// Created by Jonas on 2019. 04. 23..
//

#include "Mentor.h"

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers.\n";
}

void Mentor::introduce() {
    std::cout << "Hi I'm " << _name << ", a " << _age << " years old " << getGenderAsString() << " " << getLevelAsString() << " mentor" <<std::endl;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender) {
    _level = level;
}

Mentor::Mentor() {
    _name = ("Jane Doe");
    setAge(30);
    setGender(FEMALE);
    _level = INTERMEDIATE;
}

std::string Mentor::getLevelAsString() {
    switch(_level){
        case JUNIOR:
            return "JUNIOR";
        case INTERMEDIATE:
            return "INTERMEDIATE";
        case SENIOR:
            return "SENIOR";
    }
}
