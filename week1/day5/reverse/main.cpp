#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[]{3, 4, 5, 6, 7};
    int j = sizeof(aj) / sizeof(int) - 1;

    for (int i = 0; i < sizeof(aj) / sizeof(int) / 2; ++i) {

        int a = aj[i];
        aj[i] = aj[j];
        aj[j] = a;
        --j;
    }

    for (int k = 0; k < sizeof(aj) / sizeof(int); ++k) {
        std::cout << aj[k] << " ";
    }

    return 0;
}