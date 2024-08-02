#include <iostream>
using namespace std;

class Distance
{
	int foot, inch;
		public:
			Distance(float d){
				foot = d;
				inch = 12*(d-foot);
			};
			void dis();	
};

void Distance::dis() {
	cout << "Distance " << foot << "--" << inch;
}

main()
{
	float d;
		cout << "Enter a distance: ";
		cin >> d;
		
	Distance D1 = d;
		D1.dis();
}
