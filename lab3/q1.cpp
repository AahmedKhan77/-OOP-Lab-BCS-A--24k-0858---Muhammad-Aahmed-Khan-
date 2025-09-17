// Muhammad Aahmed Khan - 24k-0858
// TASK # 01

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

int main() {
    Student s1;
    s1.name = "Ali";
    s1.rollNumber = 101;

    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;

    return 0;
}
