// Muhammad Aahmed Khan - 24k-0858
// TASK # 05

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char *str1, *str2, *concat;
    int len1, len2;

    cout << "Enter first string: ";
    string temp1;
    getline(cin, temp1);
    len1 = temp1.length();
    str1 = new char[len1 + 1];
    strcpy(str1, temp1.c_str());

    cout << "Enter second string: ";
    string temp2;
    getline(cin, temp2);
    len2 = temp2.length();
    str2 = new char[len2 + 1];
    strcpy(str2, temp2.c_str());

    concat = new char[len1 + len2 + 1];
    strcpy(concat, str1);
    strcat(concat, str2);

    cout << "\nFirst String: " << str1 << endl;
    cout << "Second String: " << str2 << endl;
    cout << "Concatenated String: " << concat << endl;

    delete[] str1;
    delete[] str2;
    delete[] concat;

    return 0;
}
