#include <iostream>
using namespace std;

//if the conversion function is in source class then use casting operator function
//if the coversion function is in the destination class then use constructor

class distances
{
	int feet, inch;
	
		public:
			distances(int f, int i){
				feet = f;
				inch = i;
			}
			void dis(){
				cout << "In feet and inch: " << feet << ":" << inch << endl;
			}
};

class dist
{
	int meter, centi;
	
		public:
			dist(int m, int c){
				meter = m;
				centi = c;
			}
			
			void show(){
				cout << "In meter and centiMeter: " << meter << ":" << centi << endl;
			}	
};

main()
{
	dist d(1, 50);
	distances D = d;
	
		D.dis();
		d.show();
}
