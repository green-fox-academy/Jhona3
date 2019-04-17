#include <iostream>
#include "Animal.h"
int main() {
    Animal Papagaj;
    Papagaj.drink();
    Papagaj.play();
    Papagaj.play();
    Papagaj.play();
    Papagaj.play();
    Papagaj.play();
    std::cout << "Hunger: " << Papagaj.getHunger() << std::endl;
    std::cout << "Thirst: " << Papagaj.getThirst() << std::endl;
    return 0;
}