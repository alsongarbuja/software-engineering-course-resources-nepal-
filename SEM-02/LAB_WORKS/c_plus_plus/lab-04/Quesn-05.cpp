#include <iostream>
using namespace std;

class copy_const
{
	int a, b;
		public:
			copy_const(int n1, int n2){
				a = n1;
				b = n2;
			}
			copy_const(copy_const &ob1){
				a = ob1.a;
				b = ob1.b;
			}
			void dis(){
				cout << "a=" << a << " , " << "b=" << b << endl;
			}
};

main()
{
	copy_const C1(12, 15);
	copy_const C2 = C1;
		
		C1.dis();
		C2.dis();
}
