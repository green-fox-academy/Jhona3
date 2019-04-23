//
// Created by Jonas on 2019. 04. 23..
//

#include "Person.h"

void Person::introduce() {
    std::cout << "Hi I'm " << _name << ", a " << _age << " years old " << getGenderAsString() << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

void Person::setName(std::string &name) {
    _name = name;
}

void Person::setAge(int age) {
    _age = age;
}

void Person::setGender(Gender gender) {
    _gender = gender;
}

Person::Person(std::string name, int age, Gender gender) {
    setName(name);
    setAge(age);
    setGender(gender);

}

std::string Person::getGenderAsString() {
    switch (_gender) {
        case Male:
            return "male";
        case Female:
            return "female";
        case Other:
            return "other";
    }
}

Person::Person() {
    _name = ("Jane Doe");
    setAge(30);
    setGender(Female);


}
