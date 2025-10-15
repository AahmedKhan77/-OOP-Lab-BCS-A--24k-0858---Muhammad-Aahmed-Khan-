// Task 1 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class PetrolPump {
    static double pricePerLiter;
    int pumpID;
    double litersFilled;
public:
    PetrolPump(int id, double liters) : pumpID(id), litersFilled(liters) {}
    void printReceipt() {
        cout << "Pump ID: " << pumpID << endl;
        cout << "Liters Filled: " << litersFilled << endl;
        cout << "Total Amount: " << litersFilled * pricePerLiter << " PKR" << endl;
    }
};
double PetrolPump::pricePerLiter = 270.50;
int main() {
    PetrolPump p1(1, 15.0);
    p1.printReceipt();
}
