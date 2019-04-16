#include <iostream>
#include <fstream>
int divByZero(int argument);
int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    std::cout<< divByZero(0);

    return 0;
}

int divByZero(int argument)
{
    int result = 0;
    try{
        if(argument == 0){
            throw std::string("Can't divide by zero!");
        }else{
            result = 10/argument;
        }

    }catch(std::string& e){
        std::cout << e << std::endl;
    }
    return result;

}