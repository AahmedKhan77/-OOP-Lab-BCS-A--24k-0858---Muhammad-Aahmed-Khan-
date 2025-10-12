// Task 2 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class NUCES_Student {
private:
    int id;
    string name;
public:
    NUCES_Student() {
        id = 0;
        name = "Not Registered";
    }
    NUCES_Student(int id) {
        this->id = id;
        name = "Name Pending";
    }
    NUCES_Student(int id, string name) {
        this->id = id;
        this->name = name;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    NUCES_Student s1;
    NUCES_Student s2(100);
    NUCES_Student s3(101, "Ali");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
