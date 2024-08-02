#include <iostream>
#define pi 3.1415
using namespace std;

void vol(int a){
	cout << "The volume of cube is: " << a*a*a << endl;
}

void vol(int r, int h){
	cout << "The volume of cylinder is: " << r*r*pi*h << endl;
}

void  vol(int l, int b, int h){
	cout << "The volume of cuboid is: " << l*b*h << endl;
}

main(){
	int len, bre, heig;
	float rad;
	
		cout << "Enter length: ";
		cin >> len;
		cout << "Enter breadth: ";
		cin >> bre;
		cout << "Enter height: ";
		cin >> heig;
		cout << "Enter radius: ";
		cin >> rad;
	
		vol(len);
		vol(rad, heig);
		vol(len, bre, heig);
}
