#include <iostream>
using namespace std;

class student
{
	protected:
		int roll_no;
	public:
		void setRoll(int r1)
		{
			roll_no = r1;
		}
		void disRoll()
		{
			cout << "Roll number: " << roll_no << endl;
		}
};

class Theory: public student
{
	protected:
		int physics_th, science_th;
	public:
		void setTheoryMarks(int m1, int m2, int r)
		{
			physics_th = m1;
			science_th = m2;
			setRoll(r);
		}
		void disTheory_marks()
		{
			cout << "Theory marks in\n Physics: " << physics_th << endl;
			cout << "science: " << science_th << endl;
		}
};

class Practical: public student
{
	protected:
		int physics_pr, science_pr;
	public:
		void setPracticalMarks(int m1, int m2, int r)
		{
			physics_pr = m1;
			science_pr = m2;
			setRoll(r);
		}
		void disPractical_marks()
		{
			cout << "Practical marks in\n Physics: " << physics_pr << endl;
			cout << "science: " << science_pr << endl;
		}
};

class Result:public Theory, public Practical
{
	protected:
		int total;
		
	public:
		void disResult()
		{
			total = physics_th + physics_pr + science_th + science_pr;
			Theory::disRoll();
			disTheory_marks();
			disPractical_marks();
			cout << "Total mark is " << total;
		}	
};


main()
{
	Result R;
		R.setTheoryMarks(60, 70, 12);
		R.setPracticalMarks(40,30,12);
		R.disResult();
}
