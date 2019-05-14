// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
// 
// Surface Area: 600
// Volume: 1000
#include <stdio.h>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    printf("Length of side a: \n");
    scanf( "%lf", &a );
    printf("Length of side b: \n");
    scanf("%lf", &b);
    printf("Length of side c: \n");
    scanf("%lf", &c);

    double volume = a*b*c;
    double area = 2*a*b + 2*b*c + 2*a*c;

    printf("The area is %.3lf \n", area);
    printf("The volume is %.3lf \n", volume);

return 0;
}