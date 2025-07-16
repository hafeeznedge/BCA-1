#include <iostream>
using namespace std;
class Base {
public:
  int square;
    Base (int x = 6)//default constructor with default value
  {
    square = x * x;  }
  void show () {
    cout << "Square of number =" << square << endl; }};
int main ()
{

  Base b;
  b.show ();
  return 0;
}