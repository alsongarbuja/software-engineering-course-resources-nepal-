#include <iostream>
#define pi 3.1415
using namespace std;

void area(int a){
	cout << "The area of square is: " << a*a << endl;
}

void area(float r){
	cout << "The area of circle is: " << r*r*pi << endl;
}

void  area(int a, int b){
	cout << "The area of rectangle is: " << a*b << endl;
}

main(){
	int len, bre;
	float rad;
	
		cout << "Enter length: ";
		cin >> len;
		cout << "Enter breadth: ";
		cin >> bre;
		cout << "Enter radius: ";
		cin >> rad;
	
		area(len);
		area(rad);
		area(len, bre);
}
