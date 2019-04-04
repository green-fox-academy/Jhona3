
#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output
    int dyno[4][4];

    for (int i = 0; i < sizeof(dyno) / sizeof(int); i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                dyno[i][j] = 1;
                std::cout << dyno[i][j];
            } else {
                dyno[i][j] = 0;
                std::cout << dyno[i][j];
            }

        }
    }

    return 0;
}