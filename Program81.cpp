#include<iostream>
#include<iomanip>
#include<string> 
using namespace std;
ostream & newl(ostream & os)
{
	os<<"\n";
	return os;
}

int main()
{
	cout<<"Hello"<<newl<<"World"<<newl;
	return 0;
}


