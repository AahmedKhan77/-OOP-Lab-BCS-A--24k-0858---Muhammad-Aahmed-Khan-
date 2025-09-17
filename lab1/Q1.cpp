#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int denominations[] = {5000, 1000, 500, 100, 20, 10, 5, 2, 1};
    int n = sizeof(denominations) / sizeof(denominations[0]);

    cout << "Minimum notes required for Rs. " << amount << " are:" << endl;

    for (int i = 0; i < n; i++) {
        int count = amount / denominations[i];
        if (count > 0) {
            cout << denominations[i] << " x " << count << endl;
            amount %= denominations[i];
        }
    }

    return 0;
}
