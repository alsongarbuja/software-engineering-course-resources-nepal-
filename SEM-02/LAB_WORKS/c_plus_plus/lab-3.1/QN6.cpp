#include <iostream>
using namespace std;

class click{
	int n;
	static int count;
	
		public:
			void getdata(){
				cout << "Enter number: ";
				cin >> n;
					count++;
						cout << endl << "No of objects = " << count;
			}
};

int click :: count=0;

main(){
	click c1, c2, c3;
	
		c1.getdata();
		c2.getdata();
		c3.getdata();
}
