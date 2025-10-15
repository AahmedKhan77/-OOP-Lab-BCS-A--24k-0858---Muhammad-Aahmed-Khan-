// Task 2 - Muhammad Aahmed Khan - 24k-0858
#include <iostream>
using namespace std;
class MobileDevice {
    string modelName;
    const string IMEINumber;
public:
    MobileDevice(string model, string imei) : modelName(model), IMEINumber(imei) {}
    void verifyDevice() const {
        cout << "Model: " << modelName << endl;
        cout << "IMEI: " << IMEINumber << endl;
    }
};
int main() {
    MobileDevice m("Samsung A54", "356789123456789");
    m.verifyDevice();
}
