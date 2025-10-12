// Task 7 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class SecureBankAccount {
private:
    int accountNumber;
    double balance;
    const string accountType;
    int* logHistory;
public:
    SecureBankAccount(int accNo, double bal, string type, int logSize)
        : accountType(type) {
        this->accountNumber = accNo;
        this->balance = bal;
        if (bal < 500.0) {
            cout << "Error: Initial balance below minimum requirement!" << endl;
        }
        logHistory = new int(logSize);
    }

    SecureBankAccount(const SecureBankAccount& acc)
        : accountType(acc.accountType) {
        accountNumber = acc.accountNumber;
        balance = acc.balance;
        logHistory = new int(*acc.logHistory);
    }

    void display() {
        cout << "Account#: " << accountNumber << ", Type: " << accountType
             << ", Balance: " << balance << ", Log Address: " << logHistory << endl;
    }

    ~SecureBankAccount() {
        delete logHistory;
        cout << "Account " << accountNumber << " memory released." << endl;
    }
};

int main() {
    SecureBankAccount a1(101, 1000.0, "Current", 10);
    a1.display();
    SecureBankAccount a2 = a1;
    a2.display();
    return 0;
}
