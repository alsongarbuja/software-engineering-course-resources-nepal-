#include <iostream>
using namespace std;

class Time
{
	int hr, min;
		public:
			Time(int t){
				hr = t/60;
				min = t%60;
			};
			void dis();	
};

void Time::dis() {
	cout << "Time: " << hr << ":" << min;
}

main()
{
	int duration;
		cout << "Enter time in mins: ";
		cin >> duration;
	
//	here the integer duration is converted to the class type	
	Time t1=duration;
		t1.dis();
}
