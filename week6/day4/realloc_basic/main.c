#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int how_many = 0;
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &how_many);

    int *numbers = (int *) malloc(sizeof(int) * how_many);
    int number = 0;
    int sum = 0;

    for (int i = 0; i < how_many; ++i) {
        printf("Enter a number: \n");
        scanf("%d", &number);
        numbers[i] = number;
        sum += number;
    }

    int *y_numbers = (int *) malloc(sizeof(int)* sum);

    for (int j = 0; j < sum; ++j) {
        y_numbers[j] = j+1;
    }

    for (int k = 0; k < sum; ++k) {
        printf("%d ", y_numbers[k]);
    }

    free(y_numbers);
    free(numbers);


    int* pointer = NULL;

    return 0;
}