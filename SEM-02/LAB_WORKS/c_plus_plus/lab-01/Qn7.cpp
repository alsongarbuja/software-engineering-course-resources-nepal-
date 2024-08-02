#include <iostream>
#define Pi 3.1415
using namespace std;

void area(int r){
	cout << "The area of the circle is " << Pi * r * r;
}

main(){
	int radius;
	
		cout << "Enter radius: ";
		cin >> radius;
			
			area(radius);
}
