#include <iostream>
#include <fstream>
#include <string>
void printMeLines(std::string path, std::string word, int number);
// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int main() {

    printMeLines("five-line.txt","Five_Five",5);

    return 0;
}

void printMeLines(std::string path, std::string word, int number){
    std::ofstream tempFile(path);
    if(tempFile.is_open()){
        for (int i = 0; i < number; ++i) {
            tempFile << word << std::endl;
            tempFile << "\n";
        }
    }


}