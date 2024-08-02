#include <iostream>
using namespace std;

class Student
{
	public:
		int roll;
			void GetRoll()
			{
				cout << "Enter a roll number: ";
				cin >> roll;
			}
};

class Test: protected Student
{
	public:
		int sub1, sub2;
			void GetMarks()
			{
				cout << "Enter marks in 2 subjects: " << endl;
				cin >> sub1 >> sub2;	
			}	
};

class result: protected Test
{
	public:
		int total;
			void dis()
			{
				GetRoll();
				GetMarks();
				total = sub1+sub2;
				cout << "Roll no.: " << roll << endl << "Marks\n";
				cout << "Sub1: " << sub1 << endl << "Sub2: " << sub2 << endl;
				cout << "Total: " << total;	
			}	
};

main()
{
	result r1;
	
		r1.dis();
}
 
