#include <iostream>
using namespace std;

class test1
{
	public:
		void dis(){
			cout << "Test1 class." << endl;
		}
			
};

class test2
{
	test1 t;
		public:
			void print(){
				t.dis();
				cout << "Container_class";
			}
};

main()
{
	test2 obj;
	
		obj.print();
}
