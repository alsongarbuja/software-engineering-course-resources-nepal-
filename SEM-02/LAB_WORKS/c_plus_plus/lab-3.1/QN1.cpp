#include <iostream>
#define pi 3.1415
using namespace std;

class circle{
	float radius;
	
		public:
			void getradius(){
				cout << "Enter radius: ";
				cin >> radius;
			}
			void printarea(){
				cout << "The area of the circle is " << pi*radius*radius;
			}
};

main(){
	circle C1;
		
		C1.getradius();
		C1.printarea();
}
