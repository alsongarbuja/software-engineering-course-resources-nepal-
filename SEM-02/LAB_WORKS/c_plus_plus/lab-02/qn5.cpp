#include <iostream>
#include <math.h>
using namespace std;

int raise_power(int n, int m=2){
	return pow(n, m);
}

main(){
	int num, power;
	
		cout << "Enter number: ";
		cin >> num;
		cout << "Enter power: ";
		cin >> power;
		
			cout << "The answer is " << raise_power(num, power);
			cout << endl << "The answer when no power is passed " << raise_power(num);
}
