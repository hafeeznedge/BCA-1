#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ================== BASE CLASS ==================
class Property {
protected:
    string name;
    string location;
    int price;

    // Friend function (can access private/protected members)
    friend void showBasicInfo(Property p);

    // Static member to count properties
    static int propertyCount;

public:
    // Default constructor
    Property() {
        name = "Sunshine Apartments";
        location = "Bangalore";
        price = 5000000;
        propertyCount++;
    }

    // Parameterized constructor
    Property(string n, string l, int p) {
        name = n;
        location = l;
        price = p;
        propertyCount++;
    }

    // Input function
    void input() {
        cout << "Enter Property Name: ";
        cin >> name;
        cout << "Enter Property Location: ";
        cin >> location;
        cout << "Enter Property Price: ";
        cin >> price;
    }

    // Display full details
    void display() {
        cout << "\nProperty Details";
        cout << "\nName: " << name;
        cout << "\nLocation: " << location;
        cout << "\nPrice: Rs. " << price;
        cout << "\nTax (5%): Rs. " << price * 0.05;
        cout << "\n--------------------------\n";
    }

    // Overloaded display function
    void display(string option) {
        if (option == "name")
            cout << "\nProperty Name: " << name;
        else if (option == "location")
            cout << "\nProperty Location: " << location;
        else
            cout << "\nInvalid Option!";
    }

    // Unary operator overloading (increase price by 10%)
    void operator++() {
        price += price * 0.10;
    }

    // Binary operator overloading (+) to combine two properties
    Property operator+(Property &p) {
        Property temp("Combined Property", "Multiple Locations", this->price + p.price);
        return temp;
    }

    // Static function to show count
    static void showPropertyCount() {
        cout << "\nTOTAL PROPERTIES CREATED: " << propertyCount << endl;
    }
};

// Initialize static variable
int Property::propertyCount = 0;

// Friend function definition
void showBasicInfo(Property p) {
    cout << "\n[Friend Function Access]";
    cout << "\nProperty Name: " << p.name;
    cout << "\nLocation: " << p.location << endl;
}

// ================== INHERITANCE ==================
class ResidentialProperty : public Property {
protected:
    int bedrooms;
    bool furnished;

public:
    ResidentialProperty(string n, string l, int p, int b, bool f)
        : Property(n, l, p), bedrooms(b), furnished(f) {}

    void displayResidential() {
        display();
        cout << "Bedrooms: " << bedrooms;
        cout << "\nFurnished: " << (furnished ? "Yes" : "No") << endl;
    }
};

// Multilevel inheritance
class Apartment : public ResidentialProperty {
private:
    int floor;
    int maintenanceCharge;

public:
    Apartment(string n, string l, int p, int b, bool f, int fl, int m)
        : ResidentialProperty(n, l, p, b, f), floor(fl), maintenanceCharge(m) {}

    void displayApartment() {
        displayResidential();
        cout << "Floor: " << floor;
        cout << "\nMaintenance Charge: Rs. " << maintenanceCharge << endl;
    }
};

// ================== MULTIPLE INHERITANCE ==================
class Pricing {
public:
    int price;
    void getPrice() {
        cout << "Enter Property Price: ";
        cin >> price;
    }
    void showPrice() {
        cout << "Base Price: " << price << " INR" << endl;
    }
};

class Agent {
public:
    string agentName;
    float serviceCharge;

    void getAgentDetails() {
        cout << "Enter Agent Name: ";
        cin >> agentName;
        cout << "Enter Service Charge (%): ";
        cin >> serviceCharge;
    }

    void showAgentDetails() {
        cout << "Agent: " << agentName
             << ", Service Charge: " << serviceCharge << "%" << endl;
    }
};

class RealEstateService : public Property, public Pricing, public Agent {
public:
    RealEstateService() : Property() {}

    void displayService() {
        cout << "\n--- Real Estate Service Details ---\n";
        Property::display();
        showPrice();
        showAgentDetails();

          float finalPrice = Pricing::price + (Pricing::price * serviceCharge / 100);
        cout << fixed << setprecision(2);
        cout << "Final Price (with Agent Charge): Rs. " << finalPrice << endl;
    }
};

// ================== MAIN ==================
int main() {
    cout << "=== Real Estate Services Comprehensive Program ===\n";

   
    Property p1("GreenVilla", "Mysore", 7500000);
    p1.display();
    showBasicInfo(p1);

    cout << "\nBefore increment (++) :";
    p1.display();
    ++p1;
    cout << "\nAfter increment:";
    p1.display();


    Property p2("SkyHeights", "Hyderabad", 8500000);
    Property combined = p1 + p2;
    cout << "\nCombined Property (Using + Operator):";
    combined.display();

    
    p2.display("name");
    p2.display("location");

   
    Property::showPropertyCount();

    
    Apartment apt("LakeView", "Pune", 6000000, 3, true, 5, 2000);
    cout << "\n--- Apartment Details ---\n";
    apt.displayApartment();

   
    RealEstateService service;
    service.getPrice();
    service.getAgentDetails();
    service.displayService();

    cout << "\n=== End of Demonstration ===\n";
    return 0;
}