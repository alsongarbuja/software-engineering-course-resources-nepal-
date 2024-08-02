#include <iostream>
using namespace std;

class complex{
	int real1, real2, img1, img2;
		
		public:
			complex(int n1, int n2, int n3, int n4){
				real1 = n1;
				real2 = n2;
				img1 = n3;
				img2 = n4;
			}
			void dis(){
				cout << "The sum of complex = " << real1+real2 << " + i" << img1+img2;
			}
};

main()
{
	complex c1(1,2,3,4);
		c1.dis();
}
