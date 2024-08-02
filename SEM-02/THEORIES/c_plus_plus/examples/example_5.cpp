#include <iostream>
using namespace std;

class A{
	int number;
		public:
			void dis(){
				cout << "Number = " << number;
			}
//			declearing class B as the friend class of A
			friend class B;
};

class B{
	public:
//		this function takes an object of class A as parameter
//		used to access the private member of class A
		void getNum(A &object, int n){
			object.number = n;
		}
};

main(){
	B obj;
	A ob;
	
		obj.getNum(ob, 5);
		ob.dis();
}
