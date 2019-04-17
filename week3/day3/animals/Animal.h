//
// Created by Jonas on 2019. 04. 17..
//

#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H

#include <iostream>
#include <string>


class Animal {
public:
    Animal();

    int getHunger() const;

    int getThirst() const;

    void eat();
    void drink();
    void play();


private:
    int _hunger = 50;
    int _thirst = 50;
};


#endif //ANIMALS_ANIMAL_H
