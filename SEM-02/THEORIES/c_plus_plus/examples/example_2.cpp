#include <iostream>
using namespace std;

class speech{
	int num;
	
	public:
		void getNum(int n){
			num = n;
		}
		void sayNum(){
			cout << "Number is " << num << endl;
		}
//	declearing the say function as the friend function
	friend void say(speech &obj, int num);
};

// It takes a obj of the class it is decleared as friend function to
// access the data members and functions of the class
void say(speech &obj, int num){
	obj.getNum(num);
	obj.sayNum();
}

main(){
	speech ob;
	
	say(ob, 3);
}
