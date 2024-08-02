#include <iostream>
using namespace std;

class area
{
	int length, breadth;
	
		public:
			area(int l, int b){//Parametarized constructor
				length = l;	
				breadth = b;
			}	
			void printArea(){
				cout << "Area = " << length * breadth;
			}
};

main()
{
	int a, b;
	
		cout << "Enter length and breadth:" << endl;
		cin >> a >> b;
		
	area A1(a, b);
	
		A1.printArea();
}
