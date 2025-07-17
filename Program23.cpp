#include <iostream>
#include <string>
using namespace std;

class Sample {
private:
    string name;
    int age;
    string course;

public:
    // Parameterized constructor is used here
    Sample(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }

    void setDefault() {
    	//Default constructor is used here
        name = "Default User";
        age = 18;
        course = "C++ Programming";
    }

    void input() {
        cout << "Enter the User Details:\n";
        cout << "Enter your Name: ";
        cin >> name;
        cout << "Enter your Age: ";
        cin >> age;
        cout << "Enter your Course: ";
        cin >> course;
    }

    void display() {
        cout << "\n--- User Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
   
    Sample s("Hafeez", 17, "BCA");

    s.display(); 

    return 0;
}
