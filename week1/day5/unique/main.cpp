
#include <iostream>
#include <string>

void unique(int array[]);

int main(int argc, char *args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example

    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};


    for (int i = 0; i < sizeof(numbers) / sizeof(int); ++i) {

        std::cout << numbers[i] << std::endl;

    }



    //  should print: `[1, 11, 34, 52, 61]`

    return 0;
}

void unique(int array[8]) {

    int array2[8]{};

    for (int i = 0; i < sizeof(array) / sizeof(int); ++i) {

        for (int j = 1; j < sizeof(array) / sizeof(int); ++j) {

            if (array[i] = array[j]) {

                array2[i] = array[i];

            if(array)


            }

        }

    }
    for (int k = 0; k < sizeof(array) / sizeof(int); ++k) {


    }

}