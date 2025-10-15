// Task 7 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class ClassSchedule {
public:
    string timing;
    ClassSchedule(string t) : timing(t) {}
};
class Student {
    const int enrollmentID;
    string name;
public:
    Student(int id, string n) : enrollmentID(id), name(n) {}
    void show() { cout << "Student: " << name << " (" << enrollmentID << ")" << endl; }
};
class CourseSection {
    static int totalSections;
    string sectionName;
    ClassSchedule schedule;
    Student* students[2];
public:
    CourseSection(string s, string time, Student* st1, Student* st2)
        : sectionName(s), schedule(time) {
        students[0] = st1; students[1] = st2; totalSections++;
    }
    static void showTotalSections() { cout << "Total Sections: " << totalSections << endl; }
    void showSection() {
        cout << "Section: " << sectionName << " (" << schedule.timing << ")" << endl;
        for (int i = 0; i < 2; i++) students[i]->show();
    }
};
int CourseSection::totalSections = 0;
int main() {
    Student s1(101, "Ali"), s2(102, "Sara");
    CourseSection c("BCS-A", "9AM-11AM", &s1, &s2);
    c.showSection();
    CourseSection::showTotalSections();
}
