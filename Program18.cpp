#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int x,y,z,sum,percentage;
    cout<<"ENTER the marks of 1 subject \n";
    cin>>x;
    cout<<"Enter the marks of 2 subject \n";
    cin>>y;
    cout<<"Enter the marks of 3 subject \n";
    cin>>z;
    sum=x+y+z;
    cout<<"The sum of the marks is : \n"<<sum;
    percentage=(sum * 100) / 300;
    cout<<"\n The Percentage is = \n"<<percentage<<"%";

    return 0;
}
