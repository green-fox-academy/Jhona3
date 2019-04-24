//
// Created by Jonas on 2019. 04. 24..
//

#include "Violin.h"

std::string Violin::sound() {
    return "Screech";
}

Violin::Violin() {
    _name = "Violin";
    _numberOfStrings = 4;

}

Violin::Violin(int numberOfStrings) {
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}
