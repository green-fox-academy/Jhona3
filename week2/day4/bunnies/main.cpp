#include <iostream>
int countingBunnies(int numberOfBunnies);
int main() {
    std::cout << countingBunnies(8) << std::endl;
    return 0;
}

int countingBunnies(int numberOfBunnies){

    if(numberOfBunnies == 0){
        return numberOfBunnies;

    }else{
        return 2 + countingBunnies(numberOfBunnies-1);

    }


}