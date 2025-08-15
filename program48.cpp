
#include <iostream>
using namespace std;
class Math {
    int num;
public:
    // Set value
    void setValue(int val) { num = val; }
    // Overload + operator
    Math operator + (Math& obj) {
        Math temp;
        temp.num = num + obj.num;
        return temp;    }
       // Display value
    void display() const {
        cout << num << endl;    }};
int main() {
    Math obj1, obj2, result;
    obj1.setValue(20);
    obj2.setValue(10);
    cout << "Obj1: ";
    obj1.display();
    cout << "Obj2: ";
    obj2.display();
    // Perform and display operations
    result = obj1 + obj2;
    cout << "Obj1 + Obj2: ";
    result.display();
        return 0;
    }
