#include <iostream>
using namespace std;

class student
{
	protected:
		int roll;
		string name;
	public:
		student(int r, string n)
		{
			roll = r;
			name = n;
		}
		void disName()
		{
			cout << "Roll: " << roll << endl << "Name: " << name << endl;
		}
};

class Marks
{
	protected:
		int oop, pm, bc, acc, fin;
	public:
		Marks(int o, int p, int b, int a, int f)
		{
			oop = o;
			pm = p;
			bc = b;
			acc = a;
			fin = f;
		}
		void disMarks()
		{
			cout << endl << "Marks in\noop = " << oop << endl << "pm = " << pm << endl;
			cout << "Bc = " << bc << endl << "Acc = " << acc << endl << "Fin = " << fin << endl;
		}
};

class Result: public student, public Marks
{
	protected:
		int total;
		float percentage;
	public:
		Result(int n1, int n2, int n3, int n4, int n5, int r, string n):Marks(n1,n2,n3,n4,n5),student(r, n){}
		void disInfo()
		{
			disName();
			disMarks();
			total = oop+pm+bc+acc+fin;
			percentage = total/5;
				cout << endl << "Total = " << total << endl << "Percentage = " << percentage << endl;
		}	
};

main()
{
	Result R(40,50,60,70,20,10,"One");
		R.disInfo();
}
