#include <iostream>
using namespace std;

class const_overload
{
	int a, b;
	
		public:
			const_overload(){
				a = 0;
				b = 0;
			}
			const_overload(int n1, int n2){
				a = n1;
				b = n2;
			}	
			void dis(){
				cout << "Sum = " << a + b;
			}
};

main()
{
	const_overload ob1, ob2(10, 5);
	
		ob2.dis();
}
