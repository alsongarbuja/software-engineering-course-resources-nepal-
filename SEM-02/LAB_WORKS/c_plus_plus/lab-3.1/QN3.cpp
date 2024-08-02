#include <iostream>
using namespace std;

class large{
	int n1,n2;
	int largest(){
		int n;
		n = (n1>n2)?n1:n2;

			return n;	
	}
	
		public:
			void get(){
				cout << "Enter two numbers: " << endl;
				cin >> n1 >> n2;
			}
			void put(){
				cout << "The largest one is " << largest();
			}
};

main(){
	large L1;
		
		L1.get();
		L1.put();
}
