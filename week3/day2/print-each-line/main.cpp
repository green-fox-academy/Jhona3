#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <exception>

int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory
    std::ofstream myFileOut("../my-file.txt");
    if (myFileOut.is_open()) {
        myFileOut << "Hi there folks!\n";
        myFileOut << "What's up?\n";
        myFileOut << "Today's a gooood day isn't it\n";
        myFileOut.close();
    } else {
        std::cout << "The File isn't open\n";
    }
    std::ifstream myFileIn;
    //myFileIn.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        myFileIn.open("../my-file.txt");
        std::string text;
        if(myFileIn.is_open()){
            while (getline(myFileIn, text)) {

            std::cout << text << std::endl;
        }
        myFileIn.close();
        }
    } catch (std::ifstream::failure &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}