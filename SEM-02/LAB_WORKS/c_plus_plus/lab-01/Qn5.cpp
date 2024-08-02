#include <iostream>
using namespace std;

void add(int a, int b){
	cout << "The sum is " << a+b;
}

main(){
	int num1, num2;
	
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;
	
		add(num1, num2);
}
