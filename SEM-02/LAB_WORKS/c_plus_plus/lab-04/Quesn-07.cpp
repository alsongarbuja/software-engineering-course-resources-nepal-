#include <iostream>
using namespace std;

class time
{
	int hour, min, sec;
	
		public:
			time(){
				hour = 0; min = 0; sec = 0;
			}	
			time(int h, int m, int s){
				hour = h; min = m; sec = s;
			}
			void add_time(time t1, time t2){
				sec = t1.sec + t2.sec;
				min = t1.min + t2.min + sec/60;
				sec %= 60;
				hour = t1.hour + t2.hour + min/60;
				min %= 60;
				
			}
			void dis(){
				cout << "Time: " << hour << ":" << min << ":" << sec;
			}
};

main()
{
	time ob1, ob2(3, 20, 80), ob3;
	
		ob3.add_time(ob1, ob2);
		ob3.dis();
}
