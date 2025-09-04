#include<iostream>
#include<string>
using namespace std;

class hospital {
    string pname;
    int pno;
    int age;
    float height;
    float weight;

public:        
    // Parameterized Constructor
    hospital(string name, int phone, int a, float h, float w) {
        pname = name;
        pno = phone;
        age = a;
        height = h;
        weight = w;
    }

    void addpatient() {
        cout << "Enter the Patient Name : ";
        cin >> pname;
        cout << "Enter Patient Phone Number : ";
        cin >> pno;
        cout << "Enter Patient Age : ";
        cin >> age;
        cout << "Enter Patients Height : ";
        cin >> height;
        cout << "Enter Patients Weight : ";
        cin >> weight;
    }
    
    void displaypatient() {
        cout << "\nName : " << pname;
        cout << "\nPhone Number : " << pno;
        cout << "\nAge : " << age;
        cout << "\nHeight : " << height;
        cout << "\nWeight : " << weight;
    }

    void doctorappointment() {
        cout << "\nDoctor Appointment booked successfully for " << pname << endl;
    }
    
    void bill() {
        int consultationFee = 500;
        int test = 100;
        int reports = 100;
        int total = consultationFee + test + reports;
        
        cout << "\n___Hospital Bill____";
        cout << "\nPatient Name = " << pname;
        cout << "\nConsultation Fee = Rs." << consultationFee;
        cout << "\nTests Fee = Rs." << test;
        cout << "\nReports Fee = Rs." << reports;
        cout << "\n______________________";
        cout << "\nTotal Bill = Rs." << total;
    }
};

int main() {
    // Creating object using parameterized constructor
    hospital h("Unknown", 0, 0, 0.0, 0.0);

    int choice;
    cout << "Hospital Management System " << endl;
    cout << "\n1. Add Patient";
    cout << "\n2. Display Patient";
    cout << "\n3. Generate Bill ";
    cout << "\n4. Exit Program \n";
    cin >> choice;
    
    if (choice == 1) {
        h.addpatient();
        h.doctorappointment();
    } else if (choice == 2) {
        h.displaypatient();
    } else if (choice == 3) {
        h.bill();
    } else if (choice == 4) {
        cout << "Exiting program. Thank you!\n";
    } else {
        cout << "INVALID INPUT";
    }

    return 0;
}