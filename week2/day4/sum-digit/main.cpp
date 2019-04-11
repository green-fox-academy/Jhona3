#include <iostream>
int sumDigit(int digit);
int main() {
    std::cout << sumDigit(126578) << std::endl;
    return 0;
}

int sumDigit(int digit){

    if(digit<1){
        return digit;
    }else{
       return digit%10+sumDigit(digit/10);
    }

}