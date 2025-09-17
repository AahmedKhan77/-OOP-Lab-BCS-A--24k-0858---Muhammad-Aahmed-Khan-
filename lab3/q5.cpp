// Muhammad Aahmed Khan - 24k-0858
// TASK # 05

#include <iostream>
using namespace std;

class Concrete {
private:
    string message;

public:
    Concrete(string msg) {
        message = msg;
    }

    void displayMessage() {
        cout << "Message: " << message << endl;
    }
};

int main() {
    Concrete c("Hello, this is a concrete class example!");
    c.displayMessage();
    return 0;
}
