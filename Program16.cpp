#include<iostream>
#include<string>
using namespace std;

class student {
	private:
	static const int numbSubjects = 5;
	int marks[numbSubjects];
	float totalmarks;

	string name,section;
	
	public:
		void input() {
	cout<<"Enter the student details : \n";
	cout<<"Name : ";
	cin>>name;
	cout<<"Section : ";
	cin>>section;
	cout<<"Enter the marks of 5 subjects : \n";
	for(int i=0; i<numbSubjects; i++) {
		cout<<"Subject"<<i+1<<":";
		cin>>marks[i];
		totalmarks += marks[i];
	}
}

	void display () {
	cout<<"Total marks = "<<totalmarks<<"\n";
	cout<<"\n Marks Entered are : \n";
	for(int i=0; i<numbSubjects; i++) {
		cout<<"Subject"<< i + 1 <<":"<<marks[i]<<endl;
	}
	cout<<"The Percentage of the Student is : ";
	float percentage = totalmarks/500*100;
	float average = totalmarks/numbSubjects;
	cout<<percentage<<"%\n";
	cout<<"The Average marks are : "<<average<<"\n";
	}
};
int main ()
{
	student s1;
	s1.input();
	s1.display();
	return 0;
}