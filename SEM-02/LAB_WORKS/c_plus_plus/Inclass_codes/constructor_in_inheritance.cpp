#include <iostream>
using namespace std;

class test1
{
	public:
		int num1, num2;
			test1(int n1, int n2){
				num1 = n1;
				num2 = n2;
			}	
};

class test2: protected test1
{
	int num3;
		public:
			test2(int a, int b, int c):test1(b,c){
				num3 = a;
			}
			void mul(){
				cout << "The multiplication is " << num1*num2*num3;
			}
};

main()
{
	test2  obj(2,3,4);
	
		obj.mul();
}
