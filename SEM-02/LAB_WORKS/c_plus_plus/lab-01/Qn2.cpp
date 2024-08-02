#include <iostream>
using namespace std;

void greatest(int a, int b){
	int c;
		
		c = (a>b) ? a :  b;
		
			cout << "The greatest among " << a << " and " << b << " is " << c;
}

main (){
	int num1, num2;
	
		cout << "Enter two numbers: " << endl;
		cin >> num1 >> num2;
		
			greatest(num1, num2);
}
