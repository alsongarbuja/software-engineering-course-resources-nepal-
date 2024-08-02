// This program is wrong needs fix

#include <iostream>
using namespace std;

class shape{
	protected:
		int width, height;
	public:
			shape(int a=0, int b=0){
				width = a;
				height = b;
			}
			void area(){
				cout << "Parent area:" << width*height;
			}
};

class rect: public shape{
	public:
		rect(int a, int b):shape(a, b){ }
		void area(){
			cout << "Rectangle area: " << width*height << endl;
		}
};

class tri: public shape{
	public:
		tri(int a, int b):shape(a, b){ }
		void area(){
			cout << "Triangle area: " << width*height/2 << endl;
		}
};


main(){
	rect r(2,3);
	tri t(4,5);
	
		r.area();
		t.area();
}
