#include<iostream>
#include<string>
using namespace std;

class Railway {

		string name;
		int age;
		string from;
		string to;
		int seatno ;
		public:        
void addPassenger( int seat) {
	cout<<"Enter the Name of the Passenger : ";
	cin>>name;
	cout<<"Enter the Age :";
	cin>>age;
	cout<<"From : ";
	cin>>from;
	cout<<"To : ";
	cin>>to;
	seatno=seat;
	cout<<"Passenger is Added successfully \n";
}

void displayPassenger () {
	cout <<"Seat no = "<<seatno;
	cout<<"\nName = "<<name;
	cout<<"\nAge = "<<age;
	cout<<"\nFrom = "<<from;
	cout<<"\nTo = "<<to;
}
};
int main () {
	 int count =0;
	int choice;
	const int size = 5;
	Railway r[size];
	
	
	cout << "\n MENU ";
    cout << "\n1. Add Passenger";
    cout << "\n2. Display Passengers";
    cout << "\nEnter your choice: ";
    cin >> choice;
    
    if (choice==1) {
    	if( count < size) {
		r[count].addPassenger(count+1);
		count++; 
	}else {
            cout << "No more seats available!\n";
        }
}
       else if (choice == 2) {
        if (count == 0) {
            cout << "\nNo passengers added yet!\n";
        } else {
            cout << "\nPASSENGER LIST ";
            for (int i = 0; i < count; i++) {
                r[i].displayPassenger();
            }
        }
    }
    else {
        cout << "INVALID INPUT";
    }

   
	
	return 0;
	

};