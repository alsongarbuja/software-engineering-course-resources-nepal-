#include <iostream>
using namespace std;

class comp{
	int r1, r2, im1, im2;
	
		public:
			comp(int n1, int n2, int n3, int n4){
				r1 = n1;
				r2 = n2;
				im1 = n3;
				im2 = n4;
			}
			void dis(){
				cout << "Sum is " << r1+r2 << " + i" << im1+im2;
			}
};

main()
{
	comp c1(1,2,3,4);
	
		c1.dis();
}
