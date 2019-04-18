//
// Created by Jonas on 2019. 04. 18..
//

#include "Counter.h"

Counter::Counter(int value) {
    setValue(value);
    _initialValue = value;

}

void Counter::add(int numb) {
    if(numb==0){
        ++_value;
    }else{
        _value = _value + numb;
    }
}

int Counter::get() {
    return _value;
}

void Counter::reset() {
    _value = _initialValue;
}
void Counter::setValue(int value) {
    _value = value;
}

