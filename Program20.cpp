#include <iostream>
using namespace std;
class demo {
  private:
  int a=5;
  friend void display(demo);
};
void display(demo d)
{
  cout<<"a: "<<d.a<<endl;
}
int main() {
  demo d;
  display(d);//calling a friend function
return 0; 
}