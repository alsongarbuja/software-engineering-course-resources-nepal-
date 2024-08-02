#include <iostream>
using namespace std;

class square{
	int length;
	
		public:
			void getlength(){
				cout << "Enter length: ";
				cin >> length;
			}
			void printarea(){
				cout << "The area of the square is " << length*length;
			}
			void printperimeter(){
				cout << endl << "The perimeter of the square is " << 4*length;
			}
};

main(){
	square S1;
	
		S1.getlength();
		S1.printarea();
		S1.printperimeter();
}
