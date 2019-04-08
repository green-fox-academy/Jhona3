#include <iostream>

int *maximumFunc(int array[], int length);

int main() {
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality



    std::cout << "Gimme a number!\n";
    int size = 0;
    std::cin >> size;
    int numbers[size];
    std::cout << "\n" << "Gimme " << size << " more number!\n";
    for (int i = 0; i < size; ++i) {

        std::cin >> numbers[i];

    }

    std::cout << maximumFunc(numbers, size) << std::endl;
    std::cout << *maximumFunc(numbers, size);


    return 0;
}

int *maximumFunc(int array[], int length) {

    int maximum = 0;
    int *maxPointer = &maximum;
    for (int i = 0; i < length; ++i) {
        if (array[i] > *maxPointer) {

            *maxPointer = array[i];

        }
    }
    return maxPointer;
}