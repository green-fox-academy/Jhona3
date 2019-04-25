//
// Created by Jonas on 2019. 04. 25..
//

#include "apple.h"

std::string getApple() {
    return "pear";
}

int sumNumbers(std::vector<int> numbers) {
    int sumOfNumbers = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sumOfNumbers += numbers[i];
    }
    return sumOfNumbers;
}
