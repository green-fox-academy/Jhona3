#include <iostream>
void swap(int *a, int *b);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    swap(&a, &b);

    std::cout << a << "\n" << b;


    return 0;
}

void swap(int *num1, int *num2){
    int buff = 0;
    buff = *num1;
    *num1 = *num2;
    *num2 = buff;


}