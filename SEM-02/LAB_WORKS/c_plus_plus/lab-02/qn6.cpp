#include <iostream>
using namespace std;

class mul{
	int num1=2, num2=3;
	public:
		void multiply(int a, int b);
		void multiply();
		void multiply(int a, int b, int c);
};

void mul :: multiply(int a, int b){
	cout << "The ans is: " << a*b << endl;
}

void mul :: multiply(){
	cout << "The ans is: " << num1*num2 << endl;
}

void mul :: multiply(int a, int b, int c){
	cout << "The ans is: " << a*b*c << endl;
}

main(){
	mul m1;
	int numb1, numb2, numb3;
	
		cout << "Enter three numbers: " << endl;
		cin >> numb1 >> numb2 >> numb3;
	
		m1.multiply(numb1, numb2);
		m1.multiply();
		m1.multiply(numb1, numb2, numb3);
}

