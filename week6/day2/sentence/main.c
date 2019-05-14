#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter, 
// and splits a string to words by space
// solve the problem with the proper string.h function

void split_sentence(char *sentence);

int main()
{
    char sentence[] = "Welcome to the real world\n";

    split_sentence(sentence);

    return(0);
}



void split_sentence(char *sentence)
{

    for (char *i = strtok(sentence, " "); i != NULL ; i = strtok(NULL, " ")) {

        puts(i);

    }

}
