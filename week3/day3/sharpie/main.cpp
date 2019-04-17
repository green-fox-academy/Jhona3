#include <iostream>
#include "Sharpie.h"

int main() {
    Sharpie GSharpie("Green", 2.1);
    GSharpie.use();
    GSharpie.use();
    GSharpie.use();
    GSharpie.use();
    GSharpie.use();
    GSharpie.use();
    GSharpie.use();
    std::cout << "Color of the sharpie: " << GSharpie.getColor() << std::endl;
    std::cout << "Width of the sharpie: " << GSharpie.getWidth() << std::endl;
    std::cout << "Ink amount of the sharpie: " << GSharpie.getInkAmount() << std::endl;
    return 0;
}