#include <iostream>
using namespace std;

//if the conversion function is in source class then use casting operator function
//if the coversion function is in the destination class then use constructor

class distances
{
	int meter;
	float centimeter;
	
		public:
			distances(int m, float c){
				meter = m;
				centimeter = c;
			}
			int getm(){
				return meter;
			}
			float getc(){
				return centimeter;
			}
};

class dist
{
	int feet, inch;
	
		public:
			dist(int f, int i){
				feet = f;
				inch = i;
			}
			dist(distances d){
				int m;
				float c;
				m = d.getm();
				c = d.getc();
				
				feet = m*3.3;
				inch = c*0.4;
				feet += inch/12;
				inch %= inch;
			}
			void show(){
				cout << "In feet and inch: " << feet << ":" << inch << endl;
			}	
};

main()
{
	distances D(4, 50);
	dist d = D;
		
		d.show();
}
