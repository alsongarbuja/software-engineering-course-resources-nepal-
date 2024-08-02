#include <iostream>
using namespace std;

class complex_adder{
	int real, imagi;
	
		friend complex_adder add_complex(complex_adder obj1, complex_adder obj2){
			complex_adder obj3;
			
				obj3.real = obj1.real + obj2.real;
				obj3.imagi = obj1.imagi + obj2.imagi;
				
				return obj3;
		}
		
			public:
				void getdata(){
					cout << "Enter a real and imaginary number: " << endl;
					cin >> real >> imagi;
				}
				void display(){
					cout << "The sum is " << real << "+" << imagi << "i";
				}
};

main(){
	complex_adder C1, C2, C3;
	
		C1.getdata();
		C2.getdata();
		
			C3 = add_complex(C1, C2);
			C3.display();
			
}
