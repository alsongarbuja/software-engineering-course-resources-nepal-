#include <iostream>
using namespace std;

class employee
{
	protected:
		int eid, salary;
		string ename;
	public:
		employee(int id, int s, string n)
		{
			eid = id;
			salary = s;
			ename = n;
		}
		void disInfo()
		{
			cout << "E-Id: " << eid << endl << "E-name: " << ename << endl;
			cout << "Salary: " << salary << endl;
		}
};

class company: public employee
{
	protected:
		string cname, clocation;
	public:
		company(string cN, string cL, string N, int sal, int idt):employee(idt, sal, N)
		{
			cname = cN;
			clocation = cL;			
		}
		void Disinfo()
		{
			disInfo();
			cout << "Company name: " << cname << endl << "Company location: " << clocation << endl; 
		}	
};

main()
{
	company c("ABC", "Somewhere", "Raja", 12000, 12345);
		c.Disinfo();
}


