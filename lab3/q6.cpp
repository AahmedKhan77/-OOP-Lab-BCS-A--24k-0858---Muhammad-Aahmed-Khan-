// Muhammad Aahmed Khan - 24k-0858
// TASK # 06

#include <iostream>
using namespace std;

class Vehicle {
public:
    string make;
    string model;

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
public:
    string engineType;

    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Engine Type: " << engineType << endl;
    }
};

int main() {
    Car myCar;
    myCar.make = "Toyota";
    myCar.model = "Corolla";
    myCar.engineType = "Hybrid";

    myCar.displayInfo();
    return 0;
}
