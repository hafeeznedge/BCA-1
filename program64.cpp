#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class (inherits Person)
class Student : public Person {
private:
    int rollNo;

public:
    void getStudentDetails() {
        getDetails(); // calling base class function
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void showStudentDetails() {
        showDetails(); // calling base class function
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.getStudentDetails();
    cout << "\n--- Student Information ---\n";
    s.showStudentDetails();

    return 0;
}