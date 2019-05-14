#include <stdio.h>

int main()
{
    // Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

int number_to_guess = 8;
int guessed_number = 0;
while(guessed_number != number_to_guess){
    printf("Please enter a number: \n");
    scanf("%d", &guessed_number);
    if(number_to_guess > guessed_number){
        printf("The stored number is higher\n");
    } else if(number_to_guess < guessed_number){
        printf("The stored number is lower\n");
    }else if(number_to_guess == guessed_number){
        printf("You found the number: %d\n", number_to_guess);
    }

}

    return 0;
}