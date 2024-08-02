#include <iostream>
using namespace std;

class Time
{
	int hr, min;
	
	public:
		Time(int , int );
		operator int(); //casting operator
};

Time::Time(int h, int m)
{
	hr = h;
	min = m;
}

Time::operator int()
{
	return (hr*60)+min;
}

main()
{
	int duration;
	
		Time t1(1, 30);
	
//	here the class data type t1 is converted to the integer data type duration	
		duration = t1;
		
	cout << "TIME: " << duration;	
		
}
