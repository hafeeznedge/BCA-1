#include <iostream>
using namespace std;

class Test {
public:
    // User-Defined Constructor
    Test() {
        cout << "Constructor Called"
             << endl;
    }
    // User-Defined Destructor
    ~Test() {
        cout << "Destructor Called"
             << endl;
    }
};
main() {
    Test t;
    return 0;
}