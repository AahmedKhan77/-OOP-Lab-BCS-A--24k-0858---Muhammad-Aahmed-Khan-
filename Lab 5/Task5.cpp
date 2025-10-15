// Task 5 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class Kitchen {
public:
    Kitchen() { cout << "Kitchen constructed." << endl; }
    ~Kitchen() { cout << "Kitchen destroyed." << endl; }
};
class Apartment {
    const int apartmentID;
    Kitchen kitchen;
public:
    Apartment(int id) : apartmentID(id) { cout << "Apartment " << id << " constructed." << endl; }
    ~Apartment() { cout << "Apartment " << apartmentID << " destroyed." << endl; }
};
int main() {
    Apartment a1(101);
}
