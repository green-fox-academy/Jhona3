#include <iostream>
#include <string>

void factorio(int num1, int& num2);

int main(int argc, char *args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int a = 6;
    int num2 = 1;
    factorio(a, num2);

    std::cout << num2 << std::endl;

    return 0;
}

void factorio(int num1, int& num2) {
    int a = 1;
    for (int i = 0; i < num1; i++) {

        a = a *(1 + i);

    };
    num2 = a;
}

