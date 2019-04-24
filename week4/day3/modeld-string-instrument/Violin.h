//
// Created by Jonas on 2019. 04. 24..
//

#ifndef MODELD_STRING_INSTRUMENT_VIOLIN_H
#define MODELD_STRING_INSTRUMENT_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument{
public:
    std::string sound() override;
    Violin();
    Violin(int numberOfStrings);
};


#endif //MODELD_STRING_INSTRUMENT_VIOLIN_H
