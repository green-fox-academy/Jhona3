#include <iostream>
#include <vector>
#include <string>



int main() {
    std::vector<std::string> listA = {"Apple", "Avocado", "Blueberry", "Durian", "Lychee"};
    std::vector<std::string> listB = {"Apple", "Avocado", "Blueberry", "Durian", "Lychee"};

    listB.erase(listB.begin() + 3);

    listA.insert(listA.begin() + 3, "Kiwifruit");

    if (listA.size() > listB.size()) {
        std::cout << "List A is bigger!\n";
    } else {
        std::cout << "List B is bigger!\n";
    }

    
    int indexA = -1;
    for (int i = 0; i < listA.size(); ++i) {
        if (listA[i].compare("Avocado") == 0) {
            indexA = i;
        }
    }
    int indexB = -1;
    for (int j = 0; j < listB.size(); ++j) {
        if (listB[j].compare("Durian") == 0) {
            indexB = j;
        }
    }

    listB.insert(listB.begin(),"Passion fruit" "Pummelo");

    std::cout << listA[2];


    return 0;
}

