#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    double humidityPercentage = 0.0;

    cout << "Humidity Percentage: ";
    cin >> humidityPercentage;


    cout << "New Humidity Percentage: " <<  humidityPercentage * 10 << endl;

    return 0;
}