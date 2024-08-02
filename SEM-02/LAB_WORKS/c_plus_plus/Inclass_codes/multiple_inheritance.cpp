#include <iostream>
using namespace std;

class class1
{
	protected:
		int num1;
			void getData(){
				cout << "Enter a number: ";
				cin >> num1;
			}	
};

class class2
{
	public:
		int num2;
			void getValue(){
				cout << "Enter a number: ";
				cin >> num2;
			}
};

class class3: private class1, public class2
{
	public:
		void dis(){
			getData();
			
			cout << "Sum = " << num1+num2;
		}	
};

main()
{
	class3 obj;
	
		obj.getValue();
		obj.dis();
}
