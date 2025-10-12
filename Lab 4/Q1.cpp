// Task 1 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class MobileAccount {
private:
    double balance;
    string phoneNumber;
public:
    MobileAccount() {
        balance = 50.0;
        phoneNumber = "";
    }
    MobileAccount(string num, double bal) {
        phoneNumber = num;
        balance = bal;
    }
    void display() {
        cout << "Phone: " << phoneNumber << ", Balance: " << balance << " PKR" << endl;
    }
};

int main() {
    MobileAccount m1;
    MobileAccount m2("03001234567", 200.0);
    m1.display();
    m2.display();
    return 0;
}
