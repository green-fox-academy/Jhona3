#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int array[5]{};
    int *arrayPointer = array;
    std::cout << "Give me 5 numbers!\nFirst number: ";
    std::cin >> array[0];
    std::cout << "Second number: ";
    std::cin >> array[1];
    std::cout << "Third number: ";
    std::cin >> array[2];
    std::cout << "Fourth number: ";
    std::cin >> array[3];
    std::cout << "Fifth number: ";
    std::cin >> array[4];

    for (int i = 0; i < 5; ++i) {

        std::cout << arrayPointer + i << std::endl;

    }


    return 0;
}