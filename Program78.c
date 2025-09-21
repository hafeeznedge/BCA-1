#include <iostream>
#include <string>
using namespace std;

class Student {
    int id;
    string name;
    int presents;
    int absents;

public:
    void addStudent(int sid, string sname) {
        id = sid;
        name = sname;
        presents = 0;
        absents = 0;
    }

    int getId() { return id; }
    string getName() { return name; }

    void markAttendance(char status) {
        if (status == 'P' || status == 'p')
            presents++;
        else if (status == 'A' || status == 'a')
            absents++;
    }

    void showReport() {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Presents: " << presents
             << " | Absents: " << absents << endl;
    }
};

int main() {
    Student students[50];  // max 50 students
    int studentCount = 0;
    int choice;

    do {
        cout << "\n===== Attendance Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Mark Attendance\n";
        cout << "3. View Report\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (studentCount < 50) {
                int id;
                string name;
                cout << "Enter Student ID: ";
                cin >> id;
                cin.ignore();  // clear input buffer
                cout << "Enter Student Name: ";
                getline(cin, name);
                students[studentCount].addStudent(id, name);
                studentCount++;
                cout << "Student Added Successfully!\n";
            } else {
                cout << "Student limit reached!\n";
            }
        }
        else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No students available!\n";
            } else {
                cout << "\n--- Mark Attendance ---\n";
                for (int i = 0; i < studentCount; i++) {
                    char status;
                    cout << "ID: " << students[i].getId()
                         << " | Name: " << students[i].getName()
                         << " (P/A): ";
                    cin >> status;
                    students[i].markAttendance(status);
                }
            }
        }
        else if (choice == 3) {
            if (studentCount == 0) {
                cout << "No students available!\n";
            } else {
                cout << "\n--- Attendance Report ---\n";
                for (int i = 0; i < studentCount; i++) {
                    students[i].showReport();
                }
            }
        }
        else if (choice == 4) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
