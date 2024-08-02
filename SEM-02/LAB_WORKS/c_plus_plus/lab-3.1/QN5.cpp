#include <iostream>
using namespace std;

class Employee{
	int emp_ph, salary;
	float tax, net_sal;
	char emp_name[20], emp_add[20];
	
	calculate(){
		net_sal = (salary-tax);
	}
		public:
			void input(){
				cout << "enter name: ";
				cin >> emp_name;
				cout << "enter address: ";
				cin >> emp_add;
				cout << "enter phone number: ";
				cin >> emp_ph;
				cout << "Enter salary: ";
				cin >> salary;
					
					tax = (salary*13)/100;
					
				calculate();	
			}
			void output(){
				cout << "name: " << emp_name << endl << "address: " << emp_add << endl;
				cout << "phone number: " << emp_ph << endl << "salary: " << salary << endl;
				cout << "net_salary: " << net_sal;
			}
};

main(){
	Employee E1;
	
		E1.input();
		E1.output();
}
