// Muhammad Aahmed Khan - 24k-0858
// TASK # 02

#include <iostream>
#include <string>
using namespace std;

void FirstAndLastIndex(string str, char ch, int* first, int* last) {
    *first = -1;
    *last = -1;
    for (int i = 0; i < str.length(); i++) {
        if (*(str.c_str() + i) == ch) {
            if (*first == -1) *first = i;
            *last = i;
        }
    }
}

int main() {
    string str;
    char ch;
    int firstIndex, lastIndex;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to search: ";
    cin >> ch;

    FirstAndLastIndex(str, ch, &firstIndex, &lastIndex);

    if (firstIndex == -1)
        cout << "Character not found!" << endl;
    else {
        cout << "First Occurrence: " << firstIndex << endl;
        cout << "Last Occurrence: " << lastIndex << endl;
    }

    return 0;
}
