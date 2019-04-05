#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`

    int ai[]{3,4,5,6,7};
    int sum = ai[0];
    int a;
    for(int i = 1; i < sizeof(ai) / sizeof(int); i++){

        sum +=  ai[i];



    }

    std::cout << sum << std::endl;
    return 0;
}