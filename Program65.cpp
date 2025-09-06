#include <iostream>
#include <string>
using namespace std;

// Base Class
class Property {
protected:
    string location;
    int price;

public:
    void setProperty(string loc, int pr) {
        location = loc;
        price = pr;
    }
    void showProperty() {
        cout << "Location: " << location << endl;
        cout << "Price: " << price << " INR" << endl;
    }
};

// Derived Class - Level 1
class Residential : public Property {
protected:
    int bedrooms;

public:
    void setResidential(int br) {
        bedrooms = br;
    }
    void showResidential() {
        cout << "Number of Bedrooms: " << bedrooms << endl;
    }
};

// Derived Class - Level 2 (Multilevel)
class Apartment : public Residential {
    int floor;

public:
    void setApartment(int fl) {
        floor = fl;
    }
    void showApartment() {
        // Show all details
        showProperty();
        showResidential();
        cout << "Located on Floor: " << floor << endl;
    }
};

int main() {
    Apartment apt;
    apt.setProperty("Bangalore", 5000000);
    apt.setResidential(3);
    apt.setApartment(5);

    cout << "--- Apartment Details ---" << endl;
    apt.showApartment();

    return 0;
}