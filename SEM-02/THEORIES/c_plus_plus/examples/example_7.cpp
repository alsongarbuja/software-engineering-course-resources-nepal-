#include<iostream> 
using namespace std; 
   
class Complex { 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0){
		real = r;   
		imag = i;
	} 
       
    // Way to overload operator
    // className operator (op) (className &obj){body code}
    Complex operator + (Complex const &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         // It is returned as it is stored in the c3 object later
         return res; 
    } 
    void print() { 
		cout << real << " + i" << imag << endl; 
	} 
}; 
   
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    // Here the + operator is overloaded to add complex numbers when the
    // operands are complex numbers
    // 1+2 Here + is operator and 1, 2 is operands
    Complex c3 = c1 + c2; // An example call to "operator+" 
    c3.print(); 
} 
