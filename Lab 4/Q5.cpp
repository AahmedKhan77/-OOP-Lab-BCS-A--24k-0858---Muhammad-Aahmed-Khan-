// Task 5 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class CurrencyExchange {
private:
    const double PKR_to_USD_Rate;
    string& branchName;
    int totalTransactions;
public:
    CurrencyExchange(const double rate, string& name, int trans)
        : PKR_to_USD_Rate(rate), branchName(name), totalTransactions(trans) {}

    double convertPKRtoUSD(double pkr) {
        totalTransactions++;
        return pkr / PKR_to_USD_Rate;
    }
    void display() {
        cout << "Branch: " << branchName << ", Transactions: " << totalTransactions << endl;
    }
};

int main() {
    string branch = "FAST Karachi";
    CurrencyExchange c1(278.5, branch, 5);
    c1.display();
    cout << "10000 PKR = " << c1.convertPKRtoUSD(10000) << " USD" << endl;
    return 0;
}
