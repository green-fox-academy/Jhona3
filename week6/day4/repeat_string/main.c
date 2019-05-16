#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.
char *repeat_string(char *str, int x);

int main()
{
    char *the_string = repeat_string("Bla", 9);

    printf("%s", the_string);
    
    free(the_string);
    return 0;
}

char *repeat_string(char *str, int x)
{
    char *string = (char *) calloc(strlen(str)+ 1, x);
    strcpy(string, str);
    for (int i = 1; i < x; ++i) {
        strcat(string, str);
    }
    return string;
}
