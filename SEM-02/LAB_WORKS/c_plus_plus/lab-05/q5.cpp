#include <iostream>
using namespace std;

class shape
{
	protected:
		float breadth;
			shape(float b)
			{
				breadth = b;
			}
};

class triangle: public shape
{
	protected:
		float height;
			
	public:
		triangle(float h, float b1):shape(b1)
		{
			height = h;
		}
		void dis()
		{
			cout << "Area of triangle is " << 0.5*breadth*height << endl;
		}
};

class rectangle: public shape
{
	protected:
		float length;
		
	public:
		rectangle(float l):shape(l)
		{
			length = l;
		}
		void dis()
		{
			cout << "Area of rectangle is " << breadth*length;
		}
};

main()
{
	triangle t1(6, 4);
	rectangle r1(5);
	
		t1.dis();
		r1.dis();
}
