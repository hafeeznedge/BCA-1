//If-Else
#include<iostream>
int main ()
{
	int marks;
	std::cout<<"Enter the marks : ";
	std::cin>>marks;
	if (marks>=35) {
		std::cout<<"Result : Pass";
	}
	else {
		std::cout<<"Result : Fail";
	}
	return 0;
}