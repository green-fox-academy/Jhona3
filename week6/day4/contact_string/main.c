#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.
char *concatenate_them(char *str_1, char *str_2);

int main()
{
    char *string = concatenate_them("lkds\njfjfjdslf   jdsaflkdsflkd\nsjfljldjf", "jflsfksahfkdsfhkjdsahfkdshffdalkfjdsa");

    printf("%s", string);

    free(string);

    return 0;
}

char *concatenate_them(char *str_1, char *str_2)
{

    char *result = (char *) malloc(strlen(str_1) + strlen(str_2) + 1);
    for (int i = 0; i < strlen(str_1); ++i) {
        result[i] = str_1[i];
    }
    for (int j = 0; j < strlen(str_2) + 1; ++j) {
        result[j + strlen(str_1)] = str_2[j];
    }


    return result;
}
