// Task 4 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class CallRecord {
    string callerID;
    int durationMinutes;
    static int totalCalls;
public:
    CallRecord(string id, int d) : callerID(id), durationMinutes(d) { totalCalls++; }
    static void getTotalCalls() { cout << "Total Calls: " << totalCalls << endl; }
};
int CallRecord::totalCalls = 0;
int main() {
    CallRecord calls[3] = { {"03001234567", 5}, {"03111234567", 3}, {"03211234567", 7} };
    CallRecord::getTotalCalls();
}
