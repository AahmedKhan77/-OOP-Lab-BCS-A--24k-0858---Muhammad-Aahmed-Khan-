// Muhammad Aahmed Khan - 24k-0858
// TASK # 02

#include <iostream>
using namespace std;

class Student {
public:
    string name;

private:
    int rollNumber;

public:
    void setRollNo(int r) {
        rollNumber = r;
    }

    int getRollNo() {
        return rollNumber;
    }
};

int main() {
    Student s1;
    s1.name = "Ahmed";
    s1.setRollNo(202);

    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.getRollNo() << endl;

    return 0;
}
