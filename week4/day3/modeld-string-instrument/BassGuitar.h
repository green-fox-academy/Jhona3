//
// Created by Jonas on 2019. 04. 24..
//

#ifndef MODELD_STRING_INSTRUMENT_BASSGUITAR_H
#define MODELD_STRING_INSTRUMENT_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    std::string sound()override;
    BassGuitar();
    BassGuitar(int numberOfStrings);
};


#endif //MODELD_STRING_INSTRUMENT_BASSGUITAR_H
