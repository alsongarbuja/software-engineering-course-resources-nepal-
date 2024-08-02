#include <iostream>
using namespace std;

class complex
{
	int real, img;
	
		public:
			complex()
			{
				real = 2;
				img = 4;	
			}
			complex(int r, int i)
			{
				real = r;
				img = i;
			}	
			void add(complex ob1, complex ob2)
			{
				real = ob1.real + ob2.real;
				img = ob1.img + ob2.img;
				
					cout << "The sum is " << real << "+" << img << "i";
			}
};

main()
{
	complex c1, c2(3, 5), c3;
	
		c3.add(c1, c2);
}
