#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    std::cout << "Gimme a number!\n";
    int size = 0;
    std::cin >> size;
    int numbers[size];
    std::cout << "\n" << "Gimme " << size << " more number!\n";
    for (int i = 0; i < size ; ++i) {

        std::cin >> numbers[i];

    }
    int maximum = 0;
    int *maxPointer = &maximum;
    for (int j = 0; j < size ; ++j) {
        if(numbers[j] > *maxPointer){

            *maxPointer = numbers[j];

        }

    }
    std::cout << *maxPointer <<std::endl;
    std::cout << maxPointer;




    return 0;
}