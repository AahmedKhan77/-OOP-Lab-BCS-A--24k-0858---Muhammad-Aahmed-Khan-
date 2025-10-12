// Task 6 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class OrderDetails {
private:
    int orderID;
    string itemName;
    const double deliveryFee;
public:
    OrderDetails(int orderID, string itemName, double fee)
        : deliveryFee(fee) {
        this->orderID = orderID;
        this->itemName = itemName;
    }
    ~OrderDetails() {
        cout << "Order " << orderID << " Archived and memory cleared." << endl;
    }
    void display() {
        cout << "OrderID: " << orderID << ", Item: " << itemName << ", DeliveryFee: " << deliveryFee << endl;
    }
};

int main() {
    OrderDetails o1(123, "Laptop", 500);
    o1.display();
    return 0;
}
