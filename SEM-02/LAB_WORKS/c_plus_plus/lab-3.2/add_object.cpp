#include <iostream>
using namespace std;

class height{
	int feet, inch;
	
		public:
			void getdata(){
				cout << "Enter feet: ";
				cin >> feet;
				cout << "Enter inch: ";
				cin >> inch;
			}
			void add_height(height ob1, height ob2){
				cout << "The total feet = " << ob1.feet + ob2.feet + (ob1.inch + ob2.inch)/12 << endl;
				cout << "Total inch = " << (ob1.inch + ob2.inch) % 12 << endl;
			}
};

main()
{
	height h1, h2;
	
		h1.getdata();
		h2.getdata();
		
			 h1.add_height(h1, h2);
}
