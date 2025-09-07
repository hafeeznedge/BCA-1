#include <iostream>
#include <string>
using namespace std;

// Base Class 1
class Owner {
protected:
    string ownerName;
    string contact;
public:
    void getOwnerDetails() {
        cout << "Enter Owner Name: ";
        cin >> ownerName;
        cout << "Enter Contact Number: ";
        cin >> contact;
    }
    void showOwnerDetails() {
        cout << "\nOwner Name: " << ownerName;
        cout << "\nContact Number: " << contact;
    }
};

// Base Class 2
class Property {
protected:
    string propertyName;
    string location;
    int price;
public:
    void getPropertyDetails() {
        cout << "Enter Property Name: ";
        cin >> propertyName;
        cout << "Enter Location: ";
        cin >> location;
        cout << "Enter Price: ";
        cin >> price;
    }
    void showPropertyDetails() {
        cout << "\nProperty Name: " << propertyName;
        cout << "\nLocation: " << location;
        cout << "\nPrice: " << price;
    }
};

// Derived Class (Multiple Inheritance)
class RealEstateService : public Owner, public Property {
public:
    void addPropertyService() {
        cout << "--- Enter Property Service Details ---\n";
        getOwnerDetails();
        getPropertyDetails();
    }
    void showServiceDetails() {
        cout << "\n--- Real Estate Service Details ---";
        showOwnerDetails();
        showPropertyDetails();
    }
};

// Main Function
int main() {
    RealEstateService service;
    service.addPropertyService();
    service.showServiceDetails();
    return 0;
}