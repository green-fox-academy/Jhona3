//
// Created by Jonas on 2019. 04. 24..
//

#include "StringedInstrument.h"

int StringedInstrument::getNumberOfStrings() {
    return _numberOfStrings;
}
void StringedInstrument::play() {
    std::cout << getName() << ", a " << getNumberOfStrings() << "-stringed instrument that goes " << sound() <<std::endl;
}