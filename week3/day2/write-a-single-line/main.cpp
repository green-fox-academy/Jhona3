
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::ofstream myFile("../my-file.txt");
    if(myFile.is_open()){
        myFile << "Kiss Jónás";
    }else{
        std::cout << "File is closed" << std::endl;
    }

    return 0;
}