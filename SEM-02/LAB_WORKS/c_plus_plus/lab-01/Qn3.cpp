#include <iostream>
#include <math.h>
using namespace std;

main(){
	int num, p;
	
		cout << "Enter a number: ";
		cin >> num;
		cout << "Enter a power to raise: ";
		cin >> p;
		
			cout << "The power raise of " << num << " to " << p << " is " << pow(num, p);
}
