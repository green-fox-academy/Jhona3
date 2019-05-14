#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lenght_without_string(char *name);
int length_with_string(char *name);


int main()

{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char user_name[20];
    printf("Enter your name: ");
    scanf("%s", user_name);
    char length_of_name = lenght_without_string(user_name);
    char length_of_name2 = length_with_string(user_name);

    printf("Length of name is %d character\n", length_of_name);
    printf("Length of name is %d character\n", length_of_name);

    return 0;
}

int lenght_without_string(char *name)
{
    int counter = 0;
    while(*(name++)!= '\0'){

        counter++;

    }
    return counter;
}

int length_with_string(char *name){

    return strlen(name);

}