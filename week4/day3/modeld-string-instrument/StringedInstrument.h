//
// Created by Jonas on 2019. 04. 24..
//

#ifndef MODELD_STRING_INSTRUMENT_STRINGEDINSTRUMENT_H
#define MODELD_STRING_INSTRUMENT_STRINGEDINSTRUMENT_H

#include "Instrument.h"


class StringedInstrument : public Instrument{
public:
    virtual std::string sound() = 0;
    int getNumberOfStrings();
    void play() override;
protected:
    int _numberOfStrings;

};


#endif //MODELD_STRING_INSTRUMENT_STRINGEDINSTRUMENT_H
