#include <iostream>
using namespace std;

class fabonicc
{
	public:
		void dis(int num)
		{
				static int n1 = 0, n2 = 1, n3;
			
			if(num  > 0)
			{
				n3 = n1 + n2;
				n1 = n2;
				n2 = n3;
					cout << n3 << " ";
					
				dis(num-1);
			}
		}
};

int main()
{
	int num;
	fabonicc fb;
	
	cout << "Enter number of elements you want: ";
	cin >> num;
		
		cout << "0 1 ";
	
			fb.dis(num-2);
		
	return 0;
}
