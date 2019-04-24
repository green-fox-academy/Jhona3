//
// Created by Jonas on 2019. 04. 24..
//

#ifndef MODELD_STRING_INSTRUMENT_ELECTRICGUITAR_H
#define MODELD_STRING_INSTRUMENT_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    std::string sound() override;
    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);

};


#endif //MODELD_STRING_INSTRUMENT_ELECTRICGUITAR_H
