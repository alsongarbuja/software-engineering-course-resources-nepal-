#include <iostream>
using namespace std;

class XYZ;
class ABC{
	int num1;
		public:
			friend getData(ABC a, XYZ b);
			friend max(ABC a, XYZ b);
};

class XYZ{
	int num2;
		public:
			friend getData(ABC a, XYZ b);
			friend max(ABC a, XYZ b);
};

max(ABC a, XYZ b){
	if (a.num1 > b.num2)
		cout << "The first one is greater.";
	else if (a.num1 < b.num2)
		cout << "The second number is greater.";
	else
		cout << "They are equal.";
}

getData(ABC a, XYZ b){
	cout << "Enter two number: " << endl;
	cin >> a.num1 >> b.num2;
	
		max(a, b);
}
main(){
	ABC ob1;
	XYZ ob2;
		
		getData(ob1, ob2);
}
