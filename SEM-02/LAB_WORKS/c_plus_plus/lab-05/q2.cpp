#include <iostream>
using namespace std;

class class1
{
	public:
		int num1;
		class1()
		{
			num1 = 5;
		}
};

class class2
{
	public:
		int num2;
		class2()
		{
			num2 = 25;
		}
};

class class3: protected class1, protected class2
{
	public:
		void sum()
		{
			cout << "Sum is " << num1+num2;
		}
};

main()
{
	class3 s1;
		
		s1.sum();
}
