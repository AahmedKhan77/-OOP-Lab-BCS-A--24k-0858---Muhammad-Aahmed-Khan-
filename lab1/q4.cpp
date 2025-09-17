#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of arrays: ";
    cin >> size;

    int arr1[100], arr2[100];

    cout << "Enter " << size << " elements for the first array: ";
    for (int i = 0; i < size; i++) cin >> arr1[i];

    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; i++) cin >> arr2[i];

    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    cout << "Arrays after swapping:" << endl;
    cout << "First array: ";
    for (int i = 0; i < size; i++) cout << arr1[i] << " ";
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < size; i++) cout << arr2[i] << " ";
    cout << endl;

    int largest = arr1[0];
    for (int i = 1; i < size; i++) if (arr1[i] > largest) largest = arr1[i];
    cout << "Largest element in first array (after swapping): " << largest << endl;

    int first = -10000, second = -10000;
    for (int i = 0; i < size; i++) {
        if (arr2[i] > first) {
            second = first;
            first = arr2[i];
        } else if (arr2[i] > second && arr2[i] < first) second = arr2[i];
    }
    cout << "Second largest element in second array (after swapping): " << second << endl;

    int unique = arr1[0];
    bool foundUnique = false;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) if (arr1[i] == arr1[j]) count++;
        if (count == 1) {
            unique = arr1[i];
            foundUnique = true;
            break;
        }
    }
    if (!foundUnique) unique = arr1[0];
    cout << "Unique element in first array (after swapping): " << unique << endl;

    return 0;
}
