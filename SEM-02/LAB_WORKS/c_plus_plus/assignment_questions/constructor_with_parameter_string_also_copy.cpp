#include <iostream>
using namespace std;

class Employee{
	int cd, sl;
	string Name, addr;
	
		public:
			void display(){
				cout << "Name: " << Name << endl << "Address: " << addr << endl;
				cout << "Code: " << cd << endl << "Salary: " << sl << endl;
			}
			Employee(int c, int s, string n, string a){
				cd = c;
				sl = s;
				Name = n;
				addr = a;
			}
			Employee(const Employee &e1){
				cd = e1.cd;
				sl = e1.sl;
				Name = e1.Name;
				addr = e1.addr;
			}
};

main()
{
	Employee e1(12, 12000, "Ram", "Mk");
	Employee e2 = e1;
	
		e1.display();
		e2.display();
}
