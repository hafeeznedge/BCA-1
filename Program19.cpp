// C++ program
#include<iostream>
using namespace std;
class Employee
{
  int id;
  char name[30];
  public:
  
  // Declaration of function
  void getdata();
  
  // Declaration of function
  void putdata();
};

// Defining the function outside 
// the class
void Employee::getdata()
{ 
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}

// Defining the function outside 
// the class
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}


int main()
{
  Employee emp[30]; 
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
  

  for(i = 0; i < n; i++) 
    emp[i].getdata();
  
  cout << "Employee Data - " << endl;
  

  for(i = 0; i < n; i++) 
    emp[i].putdata();
}