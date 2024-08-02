#include <iostream>
using namespace std;

class area
{
	int length, breadth;
	
		public:
			area(){//default constructor
				length = 0;
				breadth = 0;	
			}	
			void printArea(){
				cout << "Area = " << length * breadth;
			}
};

main()
{
	area A1;
	
		A1.printArea();
}
