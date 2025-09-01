#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    int eid;         
    string ename;    
    double salary;   
    string role;     
    int hra;         
    int da;          
    int basic;
    int joiningYear;
    int lateDays; 

public:
    void addemp() {
        cout << "Enter the EMPLOYEE ID: ";
        cin >> eid;
        cout << "Enter the EMPLOYEE Name: ";
        cin >> ename;
        cout << "Enter the EMPLOYEE Salary: ";
        cin >> salary;
        cout << "Enter the EMPLOYEE Role: ";
        cin >> role;
        cout << "Enter the EMPLOYEE HRA: ";
        cin >> hra;
        cout << "Enter the EMPLOYEE DA: ";
        cin >> da;
        cout << "Enter the EMPLOYEE BASIC: ";
        cin >> basic;
        cout << "Enter the EMPLOYEE Joining Year: ";
        cin >> joiningYear;
        cout << "Enter number of days employee came late: ";
        cin >> lateDays;
    }
void display () {
cout<<"Employee id = "<<eid<< endl;
cout<<"Employee Name = "<<ename<< endl;
cout<<"Employee Salary = "<<salary<< endl;
cout<<"Employee Role = "<<role<< endl;
cout<<"Employee HRA = "<<hra<< endl;
cout<<"Employee DA = "<<da<< endl;
cout<<"Employee BASIC = "<<basic<< endl;
cout << "Joining Year    = " << joiningYear << endl;
cout << "Late Days       = " << lateDays << endl;
}
void calsal() {
        double total = salary + hra + da + basic;
        cout << "Updated Total Salary = " << total << endl;
    }

 void promotion(int currentYear) {
        int yearsWorked = currentYear - joiningYear;
        if (yearsWorked >= 2  && lateDays <= 5)  {
            cout << ename << " is eligible for promotion!" << endl;
        } else {
            cout << ename << " is not eligible for promotion yet." << endl;
        }
    }
};
int main() {
    Employee e;
    e.addemp();
    e.display();
    e.calsal();
    int currentYear;
    cout << "\nEnter Current Year: ";
    cin >> currentYear;
    
    e.promotion(currentYear);
    return 0;
}
