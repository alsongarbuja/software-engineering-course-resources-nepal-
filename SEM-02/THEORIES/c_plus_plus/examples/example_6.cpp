#include <iostream>
using namespace std;

void say(){
	cout << "Hello default." << endl;
}

void say(string name){
	cout << "Hello " << name << endl;
}

void say(int n){
	cout << "Number is " << n << endl;
}

/* Here function overloading is achieved through
	passing different number of parameters and types of parameter
	in the same function name say();
*/

main(){
	string n;
	int num;
	
		cout << "Enter a name : ";
		cin >> n;
		cout << "enter a number : ";
		cin >> num;
		
		say(); // it calls the say() function
		say(n); // it calls the say(string name) function
		say(num); // it calls the say(int n) function
}
