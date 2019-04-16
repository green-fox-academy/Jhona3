
#include <iostream>
#include <fstream>
#include <string>
int lineCounter(std::string file);
int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    std::ofstream myFile("../myFile.txt");
    if(myFile.is_open()){
        myFile << "Hi there!\n";
        myFile << "Count the lines!!!\n";
        myFile.close();
    }
    std::cout << lineCounter("../myFile.txt");

    return 0;
}

int lineCounter(std::string file)
{
    std::ifstream tempFile;
    //tempFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try{
        std::string line;
        int numberOfLines = 0;
        tempFile.open(file);
        if(tempFile.is_open()){
            while(getline(tempFile, line)){
                ++numberOfLines;
            }
            tempFile.close();
            return numberOfLines;
        }else{
            return 0;
        }


    }catch(std::ifstream::failure& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}