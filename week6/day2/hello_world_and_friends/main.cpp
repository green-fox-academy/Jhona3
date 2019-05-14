#include <stdio.h>

int main()
{
    printf("Hello, me!\n");

    printf("Hello, Joco!\n");
    printf("Hello, Alex!\n");
    printf("Hello, Kenny!\n");

    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    char myName[] = "Kiss Jonas\n";
    int myAge = 25;
    float myHight = 1.83;

    printf("My Name is %s", myName);
    printf("My Name is %d \n", myAge);
    printf("My Name is %.2f \n", myHight);

    return 0;
}