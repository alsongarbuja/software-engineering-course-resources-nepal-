#include <iostream>
using namespace std;
template<class T> 

// the argument of the function is of class T type
void say(T n){
	cout << "n = " << n << endl;
}

main()
{
	int num1 = 2;
	float num2 = 9.9;
	
		say(num1); // class T can be of any type so it took int
		say(num2); // and float also
}


