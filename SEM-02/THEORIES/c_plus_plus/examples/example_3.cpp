#include <iostream>
using namespace std;

class count_obj{
	static int count;
	
		public:
			static void countObj(){
				count++;
				cout << "No of obj = " << count << endl;
			}
};

// Prototypying the static variable imp
int count_obj:: count=0;

main(){
	count_obj ob1, ob2, ob3;
	
		ob1.countObj();
		ob2.countObj();
		ob3.countObj();
//		static function can be used with class name and scope resolution {::}
		count_obj::countObj();
}
