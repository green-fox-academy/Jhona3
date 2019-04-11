#include <iostream>
int powerFunc(int base, int n);
int main() {
    std::cout << powerFunc(2,6) << std::endl;
    return 0;
}

int powerFunc(int base, int n){

    if(n==1){
        return base;
    }else{
      return  base * powerFunc(base, n-1);
    }

}