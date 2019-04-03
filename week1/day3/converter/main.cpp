#include <iostream>

int main() {
    double distanceInKm;
    std::cout << "Please write down the distance in km: ";
    std::cin >> distanceInKm;
    distanceInKm = distanceInKm * 0.62;
    std::cout << "Distance in miles: " << distanceInKm << std::endl;
    return 0;
}