#include <vector>
#include <cstring>
#include <iostream>
#include "Plants.hpp"
using namespace std;


int main() {
    double humidityPercentage = 0.0;

    cout << "Humidity Percentage: ";
    cin >> humidityPercentage;

    CheckWater(humidityPercentage);
    return 0;
}