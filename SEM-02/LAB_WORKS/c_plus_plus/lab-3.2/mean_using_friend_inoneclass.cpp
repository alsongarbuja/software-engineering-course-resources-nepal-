#include <iostream>
using namespace std;

class pr_fr{
	float num1, num2;
	void getdata(){
				cout << "Enter two numbers: " << endl;
				cin >> num1 >> num2;
			}
			
			friend mean(pr_fr obj){
				obj.getdata();
				cout << "The mean value of " << obj.num1 << " and " << obj.num2 << " is " << (obj.num1 + obj.num2)/2;
			}
};

main(){
	pr_fr obj1;
	
		mean(obj1);
}
