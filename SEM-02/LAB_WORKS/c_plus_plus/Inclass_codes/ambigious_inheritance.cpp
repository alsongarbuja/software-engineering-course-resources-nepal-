#include <iostream>
using namespace std;

class test1
{
	public:
		int num1;
		
		test1()
		{
			num1 = 8;
		}
		void dis(){
			cout << "Num1 = " << num1 << endl;
		}	
};

class test2
{
	
	public:
		int num2;
		
		test2()
		{
			num2 = 3;
		}
		void dis(){
			cout << "Num2 = " << num2 << endl;
		}	
};

class test : public test1, public test2
{
	public:
		void add()
		{
			cout << "Sum = " << num1+num2;
		}
};

main()
{
	test t1;
		t1.test1::dis();
		t1.test2::dis();
		
			t1.add();
}
