//
// Created by Jonas on 2019. 04. 24..
//

#include "ElectricGuitar.h"
std::string ElectricGuitar::sound() {
    return "Twang";
}

ElectricGuitar::ElectricGuitar() {
    _name = "Electric Guitar";
    _numberOfStrings = 6;
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _name = "Electric Guitar";
    _numberOfStrings = numberOfStrings;
}


