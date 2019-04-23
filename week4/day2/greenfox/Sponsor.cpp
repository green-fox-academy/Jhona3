//
// Created by Jonas on 2019. 04. 23..
//

#include "Sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) : Person(name, age, gender) {
    _company = company;
    _hiredStudents = 0;
}

Sponsor::Sponsor() {
    _name = ("Jane Doe");
    setAge(30);
    setGender(FEMALE);
    _company = "Google";
    _hiredStudents = 0;

}

void Sponsor::getGoal() {
    std::cout <<  "My goal is: Hire brilliant junior software developers.\n";
}

void Sponsor::introduce() {
    std::cout << "Hi I'm " << _name << ", a " << _age << " years old " << getGenderAsString() << " who represents " << _company << " and hired " << _hiredStudents << " students so far\n";
}

void Sponsor::hire() {
    ++_hiredStudents;
}
