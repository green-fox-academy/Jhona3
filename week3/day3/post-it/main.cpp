#include <iostream>
#include "PostIt.h"

int main() {
    PostIt PI1("Orange", "Blue", "Idea1");


    std::cout << PI1.getBackgroundColor() << std::endl;
    return 0;
}