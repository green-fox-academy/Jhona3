
#include <iostream>
#include <string>

int sum(int untill);

int main(int argc, char* args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    std::cout << sum(5) << std::endl;

    return 0;
}

int sum(int untill){
    int b=0;

    for(int i = 0; i < untill; i++){

       b = b + i;


    }
    return b;
}