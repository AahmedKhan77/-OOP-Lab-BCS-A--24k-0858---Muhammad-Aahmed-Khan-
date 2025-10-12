// Task 3 - Muhammad Aahmed Khan - 24k-0858

#include <iostream>
using namespace std;

class PropertyDeed {
private:
    int* ownerID;
public:
    PropertyDeed(int id) {
        ownerID = new int(id);
    }
    PropertyDeed(const PropertyDeed& p) {
        ownerID = p.ownerID; // Shallow copy
    }
    PropertyDeed(const PropertyDeed& p, bool deep) {
        ownerID = new int(*p.ownerID); // Deep copy
    }
    void setOwnerID(int id) { *ownerID = id; }
    void display() {
        cout << "OwnerID: " << *ownerID << ", Address: " << ownerID << endl;
    }
    ~PropertyDeed() {
        delete ownerID;
    }
};

int main() {
    PropertyDeed p1(101);
    PropertyDeed p2 = p1;       // Shallow copy
    PropertyDeed p3(p1, true);  // Deep copy
    p1.setOwnerID(202);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}
