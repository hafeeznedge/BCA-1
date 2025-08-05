#include<iostream>
#include<string>
using namespace std;
class example {
	public:
			int Property_id;
			string Property_name;
			string Property_location;
			int Property_price;

	void setDefault() {
		Property_id = 001;
		Property_name = "Sunshine";
		Property_location = "Bangalore";
		Property_price = 10000;
	}
	void input() {
		cout<<"Enter Property ID : ";
		cin>>Property_id;
		cout<<"Enter Property Name : ";
		cin>>Property_name;
		cout<<"Enter Property Location :";
		cin>>Property_location;
		cout<<"Enter Property Price : ";
		cin>>Property_price;
	}
	void output() {
		cout<<"____________PROPERTY DETAILS ___________"<<endl;
		cout<<"Property ID : "<<Property_id<<endl;
		cout<<"Property Name : "<<Property_name<<endl;
		cout<<"Property Location : "<<Property_location<<endl;
		cout<<"Property Price : "<<Property_price<<endl;
	}
};
	int main () {
		example e;
	char choice;
	cout<<"Do you want to enter the property details manually (y/n) : "<<endl;
	cin>>choice;
	if(choice=='y'|| choice=='Y'){
		e.input();
		e.output();
	}
	else if (choice=='n'|| choice=='N'){
		e.setDefault();
	}
	else { 
	cout<<"Invalid Option";
	}
	
	
	return 0;
}