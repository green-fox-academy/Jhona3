//
// Created by Jonas on 2019. 04. 24..
//

#ifndef MODELD_STRING_INSTRUMENT_INSTRUMENT_H
#define MODELD_STRING_INSTRUMENT_INSTRUMENT_H

#include <iostream>

class Instrument {
public:
    virtual void play () = 0;
    std::string getName();

protected:
    std::string _name;

};


#endif //MODELD_STRING_INSTRUMENT_INSTRUMENT_H
