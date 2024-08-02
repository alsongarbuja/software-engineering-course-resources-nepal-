#include <iostream>
using namespace std;
//template with more than one class model
template <class t1, class t2>

class demo1{
	t1 num1;
	t2 num2;
		
		public:
			// constructor with arguments of classes t1, t2
			demo1(t1 n1, t2 n2){
				num1 = n1;
				num2 = n2;
			}
			void dis(){
				cout << "Sum of " << num1 << " + " << num2 << " = " << num1+num2 << endl;
			}
};

main()
{
	int n1 = 2, n2 = 3;
	float n3 = 1.1, n4 = 6.7;
	
		demo1 <int, int>d1(n1, n2);
		demo1 <float, float>d2(n3, n4);
		
			d1.dis();
			d2.dis();
}
