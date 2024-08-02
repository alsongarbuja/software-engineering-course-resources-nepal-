#include <iostream>
using namespace std;

class two;
class one{
	int num1;
	void getvalue(){
				cout << "Enter a number: ";
				cin >> num1;
			}
	friend swap(one n1, two n2);
};

class two{
	int num2;
	void getvalue(){
				cout << "Enter a number: ";
				cin >> num2;
			}
	friend swap(one n1, two n2);
};

swap(one n1, two n2){
	int temp;
	
	n1.getvalue();
	n2.getvalue();
	
	cout << "The number before swap." << endl;
	cout << "NUM1 = " << n1.num1 << endl << "NUM2 = " << n2.num2;
		temp = n1.num1;
		n1.num1 = n2.num2;
		n2.num2 = temp;
		
	cout << endl << "The number after swap." << endl;
	cout << "NUM1 = " << n1.num1 << endl << "NUM2 = " << n2.num2;	
}

main(){
	one ob1;
	two ob2;	
		
		swap(ob1, ob2);
}
