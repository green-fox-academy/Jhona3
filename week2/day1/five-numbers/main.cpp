#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again
    int numbers[5]{};
    int *numbPointer = numbers;
    std::cout << "Give me five numbers:\n";

    for (int i = 0; i < 5 ; ++i) {
        std::cin >> numbers[i];
    }
    for (int j = 0; j < sizeof(numbers)/ sizeof(int); ++j) {
        std::cout << *numbPointer + j;
    }

    return 0;
}