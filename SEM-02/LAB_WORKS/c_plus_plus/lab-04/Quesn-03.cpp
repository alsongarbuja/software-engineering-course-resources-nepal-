#include <iostream>
using namespace std;

class area
{
	int length, breadth;
	
		public:
			area(){
				length = 0;	
				breadth = 0;
			}	
			area(int l, int b){
				length = l;
				breadth = b;
			}
			void printArea(){
				cout << "Area = " << length * breadth;
			}
};

main()
{
	int n1, n2;
	
		cout << "Enter two numbers: " << endl;
		cin >> n1 >> n2;
	
	area A, A1(n1, n2);
	
		A1.printArea();
}
