#include <iostream>
int *minimum(int array[], int length );

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};



    std::cout << *minimum(numbers, 7);
    return 0;
}

int *minimum(int array[], int length ){

    int *small = &array[0];
    for (int i = 0; i < length ; ++i) {

        if(array[i] < *small) {
            small = &array[i];

        }

      /*  for (int j = 1; j < length ; ++j) {
            if(array[i]>array[j]){
                 small = &array[j];
            }
        */
    }
    return small;
}