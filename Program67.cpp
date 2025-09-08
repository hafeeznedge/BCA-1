#include <iostream>
#include <string>
using namespace std;

class Property {
private:
    string propertyName;
    string loc;
    int price;

public:
    void addProperty() {
        cout << "Enter Property Name: ";
        cin >> propertyName;
        cout << "Enter Property Location: ";
        cin >> loc;
        cout << "Enter Property Price: ";
        cin >> price;
    }

    void displayProperty() {
        cout << "\nProperty Name: " << propertyName;
        cout << "\nProperty Location: " << loc;
        cout << "\nProperty Price: " << price;
    }
};

class ResidentialProperty : public Property {
private:
    int bedrooms;
    bool furnished;

public:
    void addResidentialDetails() {
        cout << "Enter Number of Bedrooms: ";
        cin >> bedrooms;
        cout << "Is it Furnished (1=yes / 0=no): ";
        cin >> furnished;
    }

    void displayResidentialDetails() {
        cout << "\nBedrooms: " << bedrooms;
        cout << "\nFurnished (1=Yes / 0=No): " << furnished ;
    }
};

class Apartment : public ResidentialProperty {
private:
    int floor;
    int maintenanceCharge;

public:
    void addApartmentDetails() {
        cout << "Enter Floor Number: ";
        cin >> floor;
        cout << "Enter Monthly Maintenance Charge: ";
        cin >> maintenanceCharge;
    }

    void displayApartmentDetails() {
        displayProperty();              
        displayResidentialDetails();    
        cout << "\nFloor: " << floor;
        cout << "\nMaintenance Charge: " << maintenanceCharge;
    }
};

int main() {
    Apartment a;

    cout << "Enter Apartment Details\n";
    a.addProperty();             
    a.addResidentialDetails();   
    a.addApartmentDetails();     

    cout << "\n----- Apartment Details -----";
    a.displayApartmentDetails();

    return 0;
}
