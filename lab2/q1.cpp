// Muhammad Aahmed Khan - 24k-0858
// TASK # 01

#include <iostream>
using namespace std;

void SwapValues(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    SwapValues(&x, &y);
    cout << "After Swap:  x = " << x << ", y = " << y << endl;

    return 0;
}
