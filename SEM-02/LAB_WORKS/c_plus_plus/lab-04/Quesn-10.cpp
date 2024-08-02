#include <iostream>
using namespace std;

class Mountain
{
	int height;
	string name, location;
	
		public:
			Mountain(int h, string n, string l)
			{
				name = n;
				height = h;
				location = l;
			}
			void DisplayInfo()
			{
				cout << "Name :" << name << endl << "Location :" << location << endl;
				cout << "Height :" << height << endl << endl;
			}
			void CmpHeight(Mountain m, Mountain M)
			{
				if (m.height > M.height)
					cout << "The first one is higher.";
				else if (m.height < M.height)
					cout << "The second one is higher.";
				else
					cout << "Both are equal.";
			}
};

main()
{
	Mountain M1(1200, "Mt.as", "Somewhere"), M2(1700, "Mt.lk", "Nowhere");
	
		M1.DisplayInfo();
		M2.DisplayInfo();
		
			M1.CmpHeight(M1, M2);
}
