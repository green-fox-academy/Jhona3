//
// Created by Jonas on 2019. 04. 24..
//

#include "BassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings) {
    _name = "Bass Guitar";
    _numberOfStrings = numberOfStrings;

}

BassGuitar::BassGuitar() {
    _name = "Bass Guitar";
    _numberOfStrings = 4;
}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}
