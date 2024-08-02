#include <iostream>
using namespace std;

class Person{
	int age, ct_no;
	string Name, address;
	
		public:
			void display(){
				cout << "Name: " << Name << endl << "Address: " << address << endl;
				cout << "Age: " << age << endl << "Citizenship_no.: " << ct_no << endl;
			}
			Person(int a, int c, string n, string ad){
				Name = n;
				address = ad;
				age = a;
				ct_no = c;
			}
};

main()
{
	Person p1(18, 003, "Alson", "Bagar");
		p1.display();
}
