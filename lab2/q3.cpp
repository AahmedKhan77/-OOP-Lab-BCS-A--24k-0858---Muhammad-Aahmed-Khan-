// Muhammad Aahmed Khan - 24k-0858
// TASK # 03

#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Sum of array elements = " << sumArray(arr, n) << endl;

    delete[] arr;
    return 0;
}
