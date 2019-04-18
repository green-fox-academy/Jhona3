#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch
    Thing obstacles("Remove the obstacles");
    Thing standUp("Stand up");
    Thing eatLunch("Eat Lunch");
    Thing milk("Get milk");
    standUp.complete();
    eatLunch.complete();
    fleet.add(milk);
    fleet.add(obstacles);
    fleet.add(standUp);
    fleet.add(eatLunch);


    std::cout << fleet.toString() << std::endl;
    return 0;
}