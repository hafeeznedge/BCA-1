#include <iostream>
#include <string>
using namespace std;

// Base Class
class Property {
protected:
    string propertyName;
    string location;
    int price;

public:
    void addProperty(string name, string loc, int p) {
        propertyName = name;
        location = loc;
        price = p;
    }

    void showProperty() {
        cout << "Property: " << propertyName << "\nLocation: " << location 
             << "\nPrice: " << price << endl;
    }
};

// Derived Class 1
class Residential : public Property {
public:
    void showResidential() {
        cout << "\n--- Residential Property ---" << endl;
        showProperty();
    }
};

// Derived Class 2
class Commercial : public Property {
public:
    void showCommercial() {
        cout << "\n--- Commercial Property ---" << endl;
        showProperty();
    }
};

int main() {
    Residential r;
    r.addProperty("Sunshine Apartments", "Bangalore", 5000000);
    r.showResidential();

    Commercial c;
    c.addProperty("Tech Park", "Hyderabad", 20000000);
    c.showCommercial();

    return 0;
}