#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int* odd_array = (int *) malloc(sizeof(int)*10);

    int* even_array = (int *) malloc(sizeof(int)*10);

    for (int i = 0; i < 10; ++i) {
        odd_array[i] = i*2+1;
    }

    for (int i = 0; i < 10; ++i) {
        even_array[i] = i*2;
    }

    even_array = (int *) realloc(even_array, sizeof(int)*20);

    for (int j = 0; j < 10; ++j) {
        even_array[j+10] = odd_array[j];
    }

    for (int k = 0; k <20; ++k) {

            for (int i = k+1; i < 20; ++i) {
                if (even_array[k] > even_array[i]){
                   int temp_num = even_array[k];

                   even_array[k] = even_array[i];
                   even_array[i] = temp_num;
                }
            }
    }

    for (int l = 19; l >= 0; --l) {
        printf("%d\n", even_array[l]);
    }

    printf("%d", sizeof(even_array));



    free(even_array);
    free(odd_array);



    return 0;
}