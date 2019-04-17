//
// Created by Jonas on 2019. 04. 17..
//

#include "Animal.h"

Animal::Animal(){


};


void Animal::drink() {
    --_thirst;
}

void Animal::eat() {
    --_hunger;
}

void Animal::play() {
    ++_thirst;
    ++_hunger;

}

int Animal::getHunger() const {
    return _hunger;
}

int Animal::getThirst() const {
    return _thirst;
}

