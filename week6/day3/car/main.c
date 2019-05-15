#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

typedef enum {VOLVO, TOYOTA, LAND_ROVER, TESLA} car_type;

typedef struct {
    car_type type;
    double km;
    double gas;
} car;

void print_status(car car);

int main()
{

    car car1;
    car1.type = TESLA;
    car1.gas = 0.5;
    car1.km = 231000;

    print_status(car1);

    return 0;
}

void print_status(car car)
{
    switch(car.type){
        case VOLVO: printf("Volvo\n");
            break;
        case TOYOTA: printf("Toyota\n");
            break;
        case LAND_ROVER: printf("Land Rover\n");
            break;
        case TESLA: printf("Tesla\n");
            break;
    }

    printf("Gas: %.2lf", car.gas);
    printf("Km: %.2lf", car.km);


}
