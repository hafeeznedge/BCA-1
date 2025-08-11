#include <iostream>
#include <string>
using namespace std;

class Property {
private:
    string PropertyName;
    string PropertyLocation;
    int PropertyPrice;

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

    // Display function
    void display() {
        cout << "\nProperty Details";
        cout << "\nName: " << PropertyName;
        cout << "\nLocation: " << PropertyLocation;
        cout << "\nPrice: Rs. " << PropertyPrice << "\n";
    }

    // Unary operator
    void operator++() {
        PropertyPrice += PropertyPrice * 0.10; // increase by 10%
    }
};

int main() {
    Property p;
	cout<<"Do you want the price details before Incrementing (y/n) : "; 
	char choice;
	cin>>choice;
	if (choice=='y'|| choice=='Y') {
		cout << "Before increment:";
   		 p.display();
   		 ++p;
		cout << "\nAfter increment:";
    	p.display();
	}   
	 // calling overloaded ++ operator
	else if (choice=='n'|| choice=='N')
	{
		++p;
		cout << "\nAfter increment:";
    	p.display();
	}
	else {
		cout<<"INVALID INPUT ";
	}
    return 0;
}
