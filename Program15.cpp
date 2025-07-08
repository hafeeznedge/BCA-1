//domain based program REAL ESTATE SERVICES 
#include <iostream> //resource libraries
#include <string>
using namespace std;

class Property 
{
	//private access specifiers can be accessed only from inside the class
private:
    string PropertyName;
    string PropertyLocation;
    int PropertyPrice;
//can be accessed by any users
public:
	
	void setDefault() {
		PropertyName = "Sunshine apartments";
		PropertyLocation = "Bangalore";
		PropertyPrice = 5000000;
	}
	
    void input() {
    	//taking input from the user of the property
        cout<<"Enter Property Name: ";
        cin>>PropertyName;

        cout<<"Enter Property Location: ";
        cin>>PropertyLocation;

        cout<<"Enter Property Price: ";
        cin>>PropertyPrice;
    }

    void display() { //to print those output details
        cout<<"\nProperty Details\n";
        cout<<"\n Name: " << PropertyName;
        cout<<"\n Location: " << PropertyLocation;
        cout<<"\n Price: " << PropertyPrice;
        
        cout<<"\n ___The Property Tax is ___ ";
        float tax = PropertyPrice * 0.05; // 5% tax
      //  float totalPrice = PropertyPrice + tax;
		//calculating the tax at 5% for the Properties
        cout<< "\nTax (5%) : Rs." << tax;
        //cout<< "\nTotal Price of the Property with Tax: Rs." << totalPrice;
        cout<< "\n--------------------------\n";
    }
};

int main() {
    Property p; //creating and object
    char choice;
    cout<<"do you want to enter the property details (y/n) : ";
    cin>>choice;
    cin.ignore(); 
    if (choice == 'y' || choice == 'Y' ) {
    	p.input();
	}else {
		p.setDefault();
	}
   
    p.display();//calling the display function to print the data

    return 0;
}
