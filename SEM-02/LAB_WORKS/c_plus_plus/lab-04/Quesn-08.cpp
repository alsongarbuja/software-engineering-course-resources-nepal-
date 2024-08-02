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
					if(age > 16)
						ct_no = c;
					else
						ct_no = 0;
			}
};

main()
{
	Person p1(18, 378, "Alson", "Bagar"), p2(16, 379, "Anil", "lamachour");
		p1.display();
		p2.display();
}
