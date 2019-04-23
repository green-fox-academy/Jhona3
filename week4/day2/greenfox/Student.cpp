//
// Created by Jonas on 2019. 04. 23..
//

#include "Student.h"

//void Student::introduce() {

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) : Person(name,age,gender) {
    _previousOrganization = previousOrganization;
}

void Student::introduce() {
    std::cout << "Hi I'm " << _name << ", a " << _age << " years old " << getGenderAsString() << " from " <<
    _previousOrganization << " who skipped " << _skippedDays << " days from the class already." <<std::endl;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}

Student::Student() {
    _name = ("Jane Doe");
    setAge(30);
    setGender(FEMALE);
    _previousOrganization = "The school of life";
    _skippedDays = 0;
}
