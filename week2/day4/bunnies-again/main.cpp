#include <iostream>
int countingEars(int numberOfBunnies);
int main() {
    std::cout << countingEars(10) << std::endl;
    return 0;
}

int countingEars(int numberOfBunnies){

    if(numberOfBunnies == 0){
        return numberOfBunnies;
    }else if(numberOfBunnies%2 == 0){

        return 2 + countingEars(numberOfBunnies-1);

    } else{
        return 3 + countingEars(numberOfBunnies-1);
    }

}