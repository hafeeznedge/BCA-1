#include <iostream> 
#include <string>
using namespace std;
int main() {
    string str1 = "Mohammed";
    string str2(" Hafeez");
    string str3;

    str3 = str1 + str2;
    cout << "str1+str2 = (str3): " << str3 <<"\n";

    cout << "Length of str3: " << str3.length() <<"\n" ;

     cout << "First character of str1: " << str1[0] <<"\n";
     cout << "Last character of str3: " << str3[str3.length() - 1] <<"\n"; //to get the last letter 


    return 0;
}