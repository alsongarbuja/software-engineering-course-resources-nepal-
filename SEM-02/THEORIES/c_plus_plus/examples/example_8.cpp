#include <iostream>
using namespace std;
template<class T> 

class Demo {  
	private: 
//	declearing a variable of class T  
		T x;  
	public:   
//	constructor of class demo with argument taking a class T variable
		Demo(T p){ 
		   x=p;   
		}   
		void show(){
		    cout << x << endl;   
		}  
};

int main() 
{  
	Demo <string>p1("GCES");  
	Demo <char> p2 ('A');  
	Demo <int> p3(15);  
	Demo <float>p4 (2.5);  
	
		p1.show ();  
		p2.show ();  
		p3.show ();  
		p4.show (); 
	
}
