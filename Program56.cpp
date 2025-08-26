#include <iostream>
#include <string>
using namespace std;

class Property {
private:
    string name;
    string location;
    int price;

public:
    // Constructor
    Property(string n, string l, int p) {
        name = n;
        location = l;
        price = p;
    }

    // Operator overloading (+)
    Property operator+(Property &p) {
        // Adding prices of two properties
        Property temp("Combined Property", "Multiple Locations", this->price + p.price);
        return temp;
    }

    // Display function
    void display() {
        cout << "Property Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Price: " << price << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Property p1("Sunshine Apartments", "Bangalore", 5000000);
    Property p2("Green Villas", "Hyderabad", 7500000);

    cout << "Property 1 Details:" << endl;
    p1.display();

    cout << "Property 2 Details:" << endl;
    p2.display();

    // overloaded + operator
    Property total = p1 + p2;

    cout << "After Adding Both Properties:" << endl;
    total.display();

    return 0;
}
