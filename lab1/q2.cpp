#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the Number of Rows: ";
    cin >> rows;

    // Upper half (including middle row)
    for (int i = 1; i <= rows; i++) {
        char ch = 'A';
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch++;
        }
        cout << endl;
    }

    // Lower half
    for (int i = rows - 1; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch++;
        }
        cout << endl;
    }

    return 0;
}
