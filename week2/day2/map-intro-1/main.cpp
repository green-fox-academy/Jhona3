#include <iostream>
#include <map>

int main() {

    std::map<int, std::string> myMap;

    if (myMap.empty()) {
        std::cout << "My map is empty!";
    } else {
        std::cout << "My map isn't empty!";
    }

    myMap[97] = "a";
    myMap[98] = "b";
    myMap[99] = "c";
    myMap[65] = "A";
    myMap[66] = "B";
    myMap[67] = "C";

    std::map<int, std::string>::iterator mapIterator = myMap.begin();

    for (; mapIterator != myMap.end(); ++mapIterator) {
        std::cout << mapIterator->first << " " << mapIterator->second <<std::endl;
    }
    myMap[68] = "D";
    std::cout << myMap.size()<<std::endl;
    std::cout << myMap[99]<<std::endl;
    myMap.erase(97);
    if(myMap.count(100)==0){
        std::cout << "There is not an associated value with 100\n";
    }else{
        std::cout << "There is an associated value with 100\n";
    }

    myMap.clear();

    return 0;
}