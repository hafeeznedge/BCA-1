#include <iostream>
using namespace std;

class PrepInsta
{
public:
  void Insta() //Default constructor.
   {
      cout<<"Learning is fun with PrepInsta"<<endl;
   }
};
int main()
{
      PrepInsta obj;
	  obj.Insta();//Creating object to invoke default constructor.
      return 0;
}