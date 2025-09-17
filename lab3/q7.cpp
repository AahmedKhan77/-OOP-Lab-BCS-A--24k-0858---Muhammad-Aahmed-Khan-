// Muhammad Aahmed Khan - 24k-0858
// TASK # 07

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    double marks;
    char grade;

public:
    Student(string n, int r, double m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void calculateGrade() {
        if (marks >= 90) grade = 'A';
        else if (marks >= 80) grade = 'B';
        else if (marks >= 70) grade = 'C';
        else grade = 'F';
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1("Ali", 101, 95.5);
    Student s2("Sara", 102, 72.0);

    s1.calculateGrade();
    s2.calculateGrade();

    cout << "\nStudent 1 Info:\n";
    s1.displayStudentInfo();

    cout << "\nStudent 2 Info:\n";
    s2.displayStudentInfo();

    return 0;
}
