#include <iostream>
using namespace std;

class des{
	int num;
	
		public:
			des(){
				cout << "Object created!" << endl;
				num = 2;
			}
			void dis(){
				cout << "Num = " << num << endl;
			}
			~des(){
				cout << "Object destroyed!";
			}
};

main()
{
	des d1; // the constructor is initialized
	
		d1.dis(); // the dis() function is initailized
		
	// as the object is no more needed the desructor is also intialized
}
