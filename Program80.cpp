#include<iostream>
#include<iomanip>
using namespace std;
ostream &curr(ostream &ostr)
{
cout<< setprecision(2);
cout<<"Rs.";
return ostr;
}

int main()
{
float amt = 4.5476;
cout<<curr<<amt;
return 0;
}
