#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> myList;
    std::vector<std::string>::iterator it = myList.begin();
    for (; it != myList.end(); ++it) {
        std::cout << *it;
    }

    myList.push_back("William");
    std::cout << myList.empty() << std::endl;
    myList.push_back("John");
    myList.push_back("Amanda");
    std::cout << myList.size() << std::endl;
    int a = 1;
    it = myList.begin();
    for (; it != myList.end(); ++it) {
        std::cout << a << ". " << *it << std::endl;
        a++;
    }
    myList.erase(myList.begin() + 1);
    it = myList.end();
    for (; it >= myList.begin(); --it) {
        std::cout << *it << std::endl;
    }


    return 0;
}