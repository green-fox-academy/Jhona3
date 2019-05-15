#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main ()
{
    FILE *fptr;
    fptr = fopen("my_f_text", "w");

    fprintf(fptr, "write a few lines\n just for fun\n have no meaning\n just for filling the void");
    fclose(fptr);

    fptr = fopen("my_f_text", "r");

    char line[150];

    while(!feof(fptr)){

        fgets(line, 150, fptr);

        puts(line);

    }

    return 0;
}