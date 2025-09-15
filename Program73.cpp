#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Property {
public:
    string propertyName;
    string location;

    void getPropertyDetails() {
        cout << "Enter Property Name: ";
        cin >> propertyName;
        cout << "Enter Location: ";
        cin >> location;
    }

    void showPropertyDetails() {
        cout << "Property: " << propertyName << ", Location: " << location << endl;
    }
};


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
    void displayService() {
        cout << "\n--- Real Estate Service Details ---\n";
        showPropertyDetails();
        showPrice();
        showAgentDetails();

        // Calculate final price
        float finalPrice = price + (price * serviceCharge / 100);
        cout << fixed << setprecision(2);
        cout << "Final Price (with Agent Charge): " << finalPrice << " INR" << endl;
    }
};

int main() {
    RealEstateService service;

    // Input details
    service.getPropertyDetails();
    service.getPrice();
    service.getAgentDetails();
	char choice;
	cout<<"Do you Want the Details : (y/n)";
	cin>>choice;
	if(choice=='Y'|| choice == 'y'){
	
    // Display details
    service.displayService();
}	else if (choice == 'N'|| choice == 'n' ) {
	cout <<" exiting the program ! Thank You";
}	else {
	cout<<"INVALID INPUT";
}
    return 0;
}
