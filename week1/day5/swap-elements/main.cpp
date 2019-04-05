#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`

    std::string abc[]{"first", "second", "third"};

    std::string a = abc[0];
    abc[0] = abc[2];
    abc[2] = a;
    std::cout << "The first is now: " << abc[0] << std::endl;
    std::cout << "The third is now: " << abc[2];

    return 0;
}