//IF-Else
#include<stdio.h>
int main () 
{	
	int marks;
	printf("Enter the marks : ");
	scanf("%d",&marks);
	if (marks>=35)	{
		printf("Result : Pass ");
	}
	else {
		printf ("Result : Fail");
	}
	return 0;
};