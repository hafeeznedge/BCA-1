#include <iostream>   // ? must have space and angle brackets
#include <string>
using namespace std;

class Property {
private:
    string name;
    string location;
    int price;
    static int propertyCount;

public:
    Property(string n, string loc, int p) {
        name = n;
        location = loc;
        price = p;
        propertyCount++;
    }

    void display() {
        cout << "Property Name : " << name << endl;
        cout << "Property Location : " << location << endl;
        cout << "Property Price : " << price << endl;
    }

    static void showPropertyCount() {
        cout << "TOTAL PROPERTIES : " << propertyCount << endl;
    }
};

// Initialize static variable
int Property::propertyCount = 0;

int main() {
    Property p1("GreenVilla", "Bangalore", 5000000);
    Property p2("Sunshine Apartments", "Mysore", 3500000);

    p1.display();
    cout << endl;
    p2.display();
    cout << endl;

    Property::showPropertyCount();

    return 0;
}

