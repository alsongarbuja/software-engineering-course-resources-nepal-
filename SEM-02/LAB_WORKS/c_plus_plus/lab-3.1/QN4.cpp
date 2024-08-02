#include <iostream>
using namespace std;

class team{
	int runs, fours, sixes;
	char name[20];
	
		public:
			void getinfo(){
				cout << endl << "Enter name: ";
				cin >> name;
				cout << "Enter runs made: ";
				cin >> runs;
				cout << "Enter fous made: ";
				cin >> fours;
				cout << "Enter sixes made: ";
				cin >> sixes;
			}
			void dis(){
				cout << endl << "Name: " << name << endl << "Runs: " << runs << endl;
				cout << "Fours: " << fours << endl << "Sixes: " << sixes << endl;
			}
};

main()
{
	team T1[5];
	
		cout << "Enter infos: " << endl;
		
			for (int i=0; i<5; i++){
				T1[i].getinfo();
			}
			
		cout << endl << "The infos: " << endl;	
		
			for (int i=0; i<5; i++){
				T1[i].dis();
			}
}
