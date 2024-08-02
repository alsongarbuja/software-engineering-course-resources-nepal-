#include <iostream>
using namespace std;
//template with more than one class model
template <class t1, class t2>

void show(t1 n1, t2 n2){
	cout << "value of n1 = " << n1 << endl;
	cout << "value of n2 = " << n2 << endl;
}

main()
{
	int num1 = 2, num2 = 4;
	char c1 = 'A', c2 = 'S';
		
		show(num1, num2);
		show(c1, c2);
}
