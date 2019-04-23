#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"

int main() {
    Person person1("Gabi", 21, Female);
    person1.introduce();
    Student student1("Sanyi", 23, Male, "ELTE");
    student1.introduce();
    Student jane;
    jane.introduce();
    Mentor senior("Blabla", 43, Male, Senior);
    senior.introduce();
    Sponsor google;
    google.introduce();
    return 0;
}