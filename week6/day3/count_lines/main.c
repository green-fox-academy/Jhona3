#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file
int count_lines(char *file_name);


int main ()
{

    printf("number of lines: %d", count_lines("../CMakeLists.txt"));


    return 0;
}
int count_lines(char *file_name)
{

    FILE *fptr;

    fptr = fopen(file_name, "r");

    int counter = 0;
    char line[50];

    while(!feof(fptr)){
        fgets(line, 50, fptr);
        counter++;
    }
    fclose(fptr);

    return counter;
}
