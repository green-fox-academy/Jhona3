//
// Created by Jonas on 2019. 04. 18..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {
public:
    Counter(int value = 0);
    void add(int numb = 0);
    int get();
    void reset();
    void setValue(int value);

private:
    int _value;
    int _initialValue;


};


#endif //COUNTER_COUNTER_H
