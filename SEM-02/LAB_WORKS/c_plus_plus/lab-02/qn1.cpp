#include <iostream>
using namespace std;

inline void multiply(int a, int b){
	return a*b;
}

main(){
	int num1, num2;
	
		cout << "Enter two numbers: " << endl;
		cin >> num1 >> num2;
			
			multiply(num1, num2);
}
