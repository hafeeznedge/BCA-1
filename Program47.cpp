
 // sample for binary operator
#include <iostream> 
using namespace std; 
 class complex { 
   private: 
    float real; 
    float img; 
   public: 
    //Constructor to initialize real and imag to 0 
    complex() : real(0), img(0) {} 
 
    void input() { 
        cout << "Enter the real and imaginary parts of the number respectively: "; 
        cin >> real; 
        cin >> img; 
    } 
 
    //Overload the + operator 
    complex operator +(const complex& obj) { 
        complex temp; 
        temp.real = real + obj.real; 
        temp.img = img + obj.img; 
        return temp; 
    } 
 
    void output() { 
        if (img < 0) 
            cout << "Output Complex number: " << real << img << "i"; 
        else 
            cout << "Output Complex number: " << real << "+" << img << "i"; 
    } 
}; 
 
int main() { 
    complex c1, c2, result; 
 
    cout << "First complex number- \n"; 
    c1.input(); 
 
    cout << "Second complex number- \n"; 
    c2.input(); 
 
   //c1 calls the operator function 
   //c2 is passed as an argument to the function 
    result = c1 + c2; 
    result.output(); 
 
    return 0; 
}
