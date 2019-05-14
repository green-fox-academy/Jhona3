#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int multiply_numbers = 13*22;
    int add_numbers = 13+22;
    int subtract_numbers = 22-13;
    float divide_numbers = (float) 22/13;
    int reminder_numbers = 22%13;
    printf("%d \n", add_numbers);
    printf("%d \n", subtract_numbers);
    printf("%d \n", multiply_numbers);
    printf("%f \n", divide_numbers);
    printf("%d \n", reminder_numbers);

    return 0;
}