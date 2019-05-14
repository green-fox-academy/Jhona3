#include <stdio.h>
#include <stdlib.h>

int is_old_enough(int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary
    int age = 0;
    printf("Please enter your age: \n");
    scanf("%d", &age);

    if(is_old_enough(age)){
        printf("He is old enough");
    } else{
        printf("He is just a babyboy");
    }


    return 0;
}

int is_old_enough(int age)
{

    if(age < 18){
        return 0;
    }
return 1;
}