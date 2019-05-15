#include <stdio.h>
#include "sandwich.h"
#include <string.h>
/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
float price_calculator(Sandwich sandwich, int how_many);

int main()
{

    Sandwich tuna_sandwich;

    strcpy(tuna_sandwich.name, "Tuna sandwich");
    tuna_sandwich.price = 5.35;
    tuna_sandwich.weight = 0.25;

    printf("The price of the sandwiches is %f\n", price_calculator(tuna_sandwich, 45));
    return 0;
}

float price_calculator(Sandwich sandwich, int how_many)
{
    float price = sandwich.price*how_many;

    return price;
}