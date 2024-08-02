#include <iostream>
using namespace std;

void getarea(int l, int b){
	cout << "The area of the square is " << l*b;
}

main(){
	int len, bre;
	
		cout << "Enter a length: ";
		cin >> len;
		cout << "Enter a breadth: ";
		cin >> bre;
		
			getarea(len, bre);
}
