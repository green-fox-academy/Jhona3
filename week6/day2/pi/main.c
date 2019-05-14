#include <stdio.h>
#include <stdlib.h>

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

float area_calculator(float radius, float pi);

int main()
{
    float pi = 3.14;
    float area = area_calculator(20, pi);

    printf("The area of the circle is: %f", area);

    return 0;
}

float area_calculator(float radius, float pi)
{
    float area = radius*radius*pi;

    return area;
}