#include <iostream>

int numberAdder(int i);

int main() {
    std::cout << numberAdder(5) << std::endl;
    return 0;
}

int numberAdder(int i){

    if(i<1){
        return i;
    }else{
     return   i + numberAdder(i-1);
    }

}