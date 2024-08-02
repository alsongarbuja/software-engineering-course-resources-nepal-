#include <iostream>
using namespace std;

class SimpleInt
{
	int principle, time, rate;
	
		public:
			SimpleInt(int p, int t, int r = 8){
				principle = p;
				time = t;
				rate = r;
			}
			void Print(){
				cout << "The simple interest is " << (principle*time*rate)/100;
			}
};

main()
{
	SimpleInt S1(1200, 3);
	
		S1.Print();
}
