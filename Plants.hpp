#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

void WaterPlants(double humidity){
    cout << "Watering Plants" << endl;
}

void wait(){
    cout << "Waiting for Change in Humidity!" << endl;
}

void CheckWater(double humidity){
    if (humidity < 40.00){
        WaterPlants(humidity);
    } else {
        wait();
    }
}