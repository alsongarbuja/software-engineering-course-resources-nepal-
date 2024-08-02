#include <iostream>
using namespace std;

class time_adder{
	int h, m, s;
		public: 
			void getTime(){
				cout << "Enter time: " << endl ;
				cin >> h >> m >> s;
			}
			time_adder display(time_adder t1);
};

time_adder time_adder :: display(time_adder t1){
	
	time_adder t3;
	
		t3.s = t1.s + s;
		t3.m = t1.m + m + t3.s/60;
		t3.s %= 60;
		t3.h = t1.h + h + t3.m/60;
		t3.m %= 60;			
			cout << "Time: " << t3.h << ":" << t3.m << ":" << t3.s;
			
}

main(){
	time_adder t1, t2, t3;
		t1.getTime();
		t2.getTime();
			t3 = t2.display(t1);
}
