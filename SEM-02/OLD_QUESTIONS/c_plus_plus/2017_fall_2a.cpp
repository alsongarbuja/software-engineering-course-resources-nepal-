#include <iostream>
using namespace std;

class two;
class one{
	int num1;
		
		public:
			one(){ num1 = 2; }
			void dis(){
				cout << "Num1 = " << num1 << endl;
			}
	
	friend void swap(one&, two&);
};

class two{
	int num2;
	
		public:
			two(){ num2 = 3; }
			void dis(){
				cout << "Num2 = " << num2 << endl;
			}
	friend void swap(one&, two&);
};

void swap(one& ob1, two& ob2){
	int temp;
		
		temp = ob1.num1;
		ob1.num1 = ob2.num2;
		ob2.num2 = temp;
}

main()
{
	one obj1;
	two obj2;
	
	cout << "Before swap: " << endl;
	obj1.dis();
	obj2.dis();
		swap(obj1, obj2);	
	cout << "After swap: " << endl;
	obj1.dis();
	obj2.dis();
}
