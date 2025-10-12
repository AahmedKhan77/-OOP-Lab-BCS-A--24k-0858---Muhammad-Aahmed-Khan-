// Task 4 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class ServerSession {
private:
    int sessionID;
public:
    ServerSession(int id) {
        sessionID = id;
        cout << "Session " << sessionID << " started. Resource acquired." << endl;
    }
    ~ServerSession() {
        cout << "Session " << sessionID << " ending. Resource released." << endl;
    }
};

int main() {
    {
        ServerSession s1(101);
    }
    cout << "Block ended." << endl;
    return 0;
}
