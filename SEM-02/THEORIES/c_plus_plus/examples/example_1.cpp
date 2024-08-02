#include <iostream>
using namespace std;

class demo{
	int num1, num2, num3;
	
	public:
//		default constructor
		demo(){
			num1=0;
			num2=0;
			num3=0;
		}
//		parameterized constructor
		demo(int a, int b, int c){
			num1=a;
			num2=b;
			num3=c;
		}
//		parameterized constructor used again so constructor can be overloaded too
		demo(int x, int y){
			num1=x;
			num2=0;
			num3=y;
		}
//		copy constructor
		demo(demo &obj){
			num1 = obj.num1;
			num2 = obj.num2;
			num3 = obj.num3;
		}
		
		void show(){
			cout << "Num1 = " << num1 << endl << "Num2 = " << num2 << endl << "Num3 = " << num3 << endl << endl;
		}
};

main(){
	demo d1(1,2,3); // intializes the demo() consructor as well as demo(int, int, int) constructor
		d1.show();
	demo d2(4,5); // intializes the demo(int, int) constructor
		d2.show();
	demo d3 = d1; // intializes the copy constructor ie demo(demo &obj)
		d3.show();
}
