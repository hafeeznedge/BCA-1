#include<iostream>
#include<string>
using namespace std;

class hospital  {
	string pname;
	int pno;
	int age;
	float height;
	float weight;
	
	public: 
	 hospital () {
	 	pname = "UNKNOWN";
	 	pno= 0;
	 	age = 0;
	 	height = 0.0;
	 	weight = 0.0;
	 }
	 
	 void addpatient() {
	 	cout<<"Enter Patient Name : ";
	 	cin>>pname;
	 	cout<<" \nEnter Patient Phone no : ";
	 	cin>>pno;
	 	cout<<"\nnter Patient Age : ";
	 	cin>>age;
	 	cout<<"Enter Patient Height : ";
	 	cin>>height;
	 	cout<<"Enter Patient Weight : ";
	 	cin>>weight;
	 	
	 }
	 
	 void displaypatient() {
	 	cout<<"\nName :"<<pname;
	 	cout<<"\nPhone No : "<<pno;
	 	cout<<"\nAge : "<<age;
	 	cout<<"\nHeight :"<<height;
	 	cout<<"\nWeight : "<<weight;
	 }
	 
	 void doctorappointment() {
	 	cout<<"\n Doctor Appointment booked successfully for :"<<pname;
	 }
	 
	 void bill() {
	 	int consultationFee = 500;
	 	int test = 100;
	 	int reports = 100;
	 	
	 	cout<<"Hospital Bill";
	 	cout<<"\nConsultationFee = Rs."<<consultationFee;
	 	cout<<"\nTest Fee = Rs."<<test;
	 	cout<<"\nReports fee = Rs."<<reports;
	 }
};
int main () {
	hospital h;
	int choice;
	
	cout<<"HOSPITAL MANAGEMENT SYSTEM ";
	cout<<"\n 1. Add Patient";
	cout<<"\n 2. Display Patient";
	cout<<"\n 3. Generate Bill ";
	cout<<"\n 4. Exit Program ";
	cin>>choice;
	
	if (choice == 1) {
		h.addpatient();
		h.doctorappointment();
	} else if (choice == 2) {
		h.displaypatient();
	} else if (choice == 3) {
		h.bill();
	} else if (choice == 4) {
		cout<<"\nExiting the Program Thank you \n";
	}
	return 0;
}