// Task 6 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class Employee {
    static int totalEmployees;
    string name;
public:
    Employee(string n) : name(n) { totalEmployees++; }
    static int getCount() { return totalEmployees; }
    void show() { cout << "Employee: " << name << endl; }
};
int Employee::totalEmployees = 0;
class ClientProject {
    Employee* team[3];
public:
    ClientProject(Employee* e1, Employee* e2, Employee* e3) {
        team[0] = e1; team[1] = e2; team[2] = e3;
    }
    void showTeam() {
        for (int i = 0; i < 3; i++) team[i]->show();
    }
};
int main() {
    Employee e1("Ali"), e2("Sara"), e3("Usman");
    ClientProject p(&e1, &e2, &e3);
    p.showTeam();
    cout << "Total Employees: " << Employee::getCount() << endl;
}
