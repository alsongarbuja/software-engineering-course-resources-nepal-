#include <iostream>
using namespace std;

class Room
{
	public:
		int l, b;
		int area(){
			return l*b;
		}	
};

class BedRoom: protected Room
{
	int h;
	
		public: 
			void SetData(int a, int b, int c){
				l = a;
				this ->b = b;
				h = c; 
			}
			void volume(){
				cout << "Area of the room is " << area();
				cout << endl << "Volume of the room is " << l*b*h;
			}
};

main()
{
	BedRoom r1;
	
		r1.SetData(12, 14, 10);
		r1.volume();
}
