
#include <stdio.h>
#include <stdlib.h>

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous excersice?

int main()
{
    int* pointer = (int *) calloc(sizeof(int), 10);

    for (int i = 0; i < 5; ++i) {
        pointer[i] = i;
    }

    for (int j = 0; j < 10; ++j) {
        printf("%d\n", pointer[j]);
    }

    free(pointer);
    pointer = 0;

    return 0;
}