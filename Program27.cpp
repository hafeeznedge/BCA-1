#include <iostream> //resource libraries
#include <string>
using namespace std;

class Property {
private:
    string PropertyName;
    string PropertyLocation;
    int PropertyPrice;

    // Declaring a friend function
    friend void showBasicInfo(Property p);

public:
    // Default constructor
    Property() {
        PropertyName = "Sunshine apartments";
        PropertyLocation = "Bangalore";
        PropertyPrice = 5000000;
    }

    // Parameterized constructor
    Property(string name, string location, int price) {
        PropertyName = name;
        PropertyLocation = location;
        PropertyPrice = price;
    }

    void setDefault() {
        PropertyName = "Sunshine apartments";
        PropertyLocation = "Bangalore";
        PropertyPrice = 5000000;
    }

    void input() {
        // Taking input from the user of the property
        cout << "Enter Property Name: ";
        cin >> PropertyName;

        cout << "Enter Property Location: ";
        cin >> PropertyLocation;

        cout << "Enter Property Price: ";
        cin >> PropertyPrice;
    }

    void display() {
        cout << "\nProperty Details\n";
        cout << "\n Name: " << PropertyName;
        cout << "\n Location: " << PropertyLocation;
        cout << "\n Price: " << PropertyPrice;

        cout << "\n ___The Property Tax is ___ ";
        float tax = PropertyPrice * 0.05; // 5% tax
        cout << "\nTax (5%) : Rs." << tax;
        cout << "\n--------------------------\n";
    }
};

// Friend function definition
void showBasicInfo(Property p) {
    cout << "\n[Friend Function Access]\n";
    cout << "Property Name: " << p.PropertyName << endl;
    cout << "Location: " << p.PropertyLocation << endl;
};

int main() {
    char choice;
    cout << "Do you want to enter the property details manually (y/n)? ";
    cin >> choice;
    cin.ignore();

    Property p; // Default constructor

    if (choice == 'y' || choice == 'Y') {
        p.input();
    } else {
        // Optionally show how to use parameterized constructor
        Property p2("GreenVilla", "Mysore", 7500000);
        p2.display();
        showBasicInfo(p2);
        return 0;
    }

    p.display();
    showBasicInfo(p);

    return 0;
}