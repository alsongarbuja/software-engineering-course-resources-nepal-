#include <iostream>
#include <new>
using namespace std;

class stackImplement
{
	int maxSize, data, tos;
	int *stk;
	
		public:
			stackImplement(int size)
			{
				tos = data = 0;
				maxSize = size;
				stk = new int[maxSize];
			}
			
//	pushing data to the array		
			void push()
			{
				if(tos >= maxSize)
				{
					cout << "The stack is full." << endl;
				}else{
					cout << "Enter a data: ";
					cin >> data;
					
						stk[tos] = data;
						cout << "pushed Data: " << data << endl;
						
						tos++;	
				}
			}
			
//	popping data from the stack		
			void pop()
			{
				if(tos == 0)
				{
					cout << "The stack is empty." << endl;
				}else{
					
						data = stk[tos-1];
						cout << "Popped Data: " << data << endl;
						
						tos--;	
				}
			}
			
//	displaying the datas in array
			void display()
			{
				if(tos == 0)
				{
					cout << "The stack is empty." << endl;
				}else{
					cout << "The stack has: " << endl;
						for(int i=0; i<tos; i++){
							cout << stk[i] << " ";
						}
					cout << endl;
				}
			}
			
			void over()
			{
				delete[] stk;	
			}
};

main()
{
	int s, choice = 1;
		
		cout << "Enter the size of array: ";
		cin >> s;
		
	stackImplement s1(s);
	
		while(choice != 0)
		{
			cout << "Choose a option:" << endl;
			cout << "1,Push\n2,Display\n3,Pop\n0,Exit" << endl;
			cin >> choice;
			
				switch(choice)
				{
					case 1:
						s1.push();
						break;
					case 2:
						s1.display();
						break;
					case 3:
						s1.pop();
						break;
				}
				
					if(choice < 0 || choice > 3)
					{
						cout << "Enter a valid option!!" << endl;
					}
		}
		
		cout << "Program ended!" << endl;
		s1.over();
}
