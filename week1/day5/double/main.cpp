#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList[] {3,4,5,6,7};

    for(int i=0; i < sizeof(numList) / sizeof(int); i++ ){

        int doubleNumb = numList[i] *2;

        std::cout << doubleNumb << std::endl;


    }

    return 0;
}