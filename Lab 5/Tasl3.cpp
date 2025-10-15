// Task 3 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class Doctor {
public:
    string name, specialization;
    Doctor(string n, string s) : name(n), specialization(s) {}
    void showDoctor() { cout << name << " - " << specialization << endl; }
};
class Hospital {
    string hospitalName;
    Doctor* doctors[3];
public:
    Hospital(string name, Doctor* d1, Doctor* d2, Doctor* d3) : hospitalName(name) {
        doctors[0] = d1; doctors[1] = d2; doctors[2] = d3;
    }
    void showHospital() {
        cout << "Hospital: " << hospitalName << endl;
        for (int i = 0; i < 3; i++) doctors[i]->showDoctor();
    }
};
int main() {
    Doctor d1("Ali", "Cardiologist"), d2("Sara", "Neurologist"), d3("Bilal", "Surgeon");
    Hospital h("Shifa International", &d1, &d2, &d3);
    h.showHospital();
}
