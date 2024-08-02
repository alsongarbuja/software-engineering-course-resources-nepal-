#include <iostream>
using namespace std;

class name{
	string firstName;
	string lastName;
	string fullName;
	
		public:
			name(){
				firstName = "No";
				lastName = "no";
			}
			name(string fn, string ln){
				firstName = fn;
				lastName = ln;
				fullName = firstName + " " + lastName;
				cout << "Name: " << fullName;
			}
};

main()
{
	name n("alson", "garbuja");
}
