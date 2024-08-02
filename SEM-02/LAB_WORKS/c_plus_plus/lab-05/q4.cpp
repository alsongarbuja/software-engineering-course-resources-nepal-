#include <iostream>
using namespace std;

class student
{
	protected:
		int roll_no;
	
	public:
		student(int r)
		{
			roll_no = r;	
		}
		void displayRoll()
		{
			cout << "Roll number: " << roll_no << endl;
		}	
};

class test: public student
{
	protected:
		int s1, s2;
		
	public:
		test(int y):student(y){}
		void getMarks(int a, int b)
		{
			s1 = a; s2 = b;	
		}	
		void printMarks()
		{
			cout << "Mark in subject1: " << s1 << endl << "Mark in subject2: " << s2 << endl;
		}
};

class sport
{
	protected:
		int score;
	public:
		sport(int s)
		{
			score = s;
		}
		void disSport()
		{
			cout << "Score in sports: " << score << endl;	
		}
};

class result: public test, public sport
{
	int total;
		
		public:
			result(int x, int w):sport(x), test(w){}
			void finalDisplay()
			{
				total = s1 + s2;
				cout << "The total marks is " << total << endl;
				disSport();
			}	
};

main()
{
	result R1(450, 10);
		R1.displayRoll();
		R1.getMarks(60, 80);
		R1.printMarks();
		R1.finalDisplay();
}
