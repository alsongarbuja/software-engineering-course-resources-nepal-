#include <iostream>
#include <new>
using namespace std;

class ArrayImplement
{
	int maxSize, data, index, item;
	int *Array;
	
		public:
			ArrayImplement(int size)
			{
				index = item = data = 0;
				maxSize = size;
				Array = new int[maxSize];
			}
			
//	adding data to the array		
			void add()
			{
				if(index >= maxSize)
				{
					cout << "The array is full." << endl;
				}else{
					cout << "Enter a data: ";
					cin >> data;
					
						Array[index] = data;
						cout << "Data: " << data << " added at index: " << index << endl;
						
						index++;	
				}
			}
			
//	displaying the datas in array
			void display()
			{
				if(index == 0)
				{
					cout << "The array is empty." << endl;
				}else{
					cout << "The array has: " << endl;
						for(int i=0; i<index; i++){
							cout << Array[i] << " ";
						}
					cout << endl;
				}
			}
			
//	sequential search for array
			void search()
			{
				if(index == 0){
					cout << "No data in the array." << endl;
				}else{
					cout << "Enter the data you want to search: ";
					cin >> item;
						int count = 0;
						
						for(int i=0; i<index; i++)
						{
							if(item == Array[i])
							{
								cout << "Data found at index: " << i << endl;
								count++;
							}
						}
						
						if(count == 0)
						{
							cout << "The data not found." << endl;
						}
				}
			}
			
			void over()
			{
				delete[] Array;	
			}
};

main()
{
	int s, choice = 1;
		
		cout << "Enter the size of array: ";
		cin >> s;
		
	ArrayImplement a1(s);
	
		while(choice != 0)
		{
			cout << "Choose a option:" << endl;
			cout << "1,Add\n2,Display\n3,Search\n0,Exit" << endl;
			cin >> choice;
			
				switch(choice)
				{
					case 1:
						a1.add();
						break;
					case 2:
						a1.display();
						break;
					case 3:
						a1.search();
						break;
				}
				
					if(choice < 0 || choice > 3)
					{
						cout << "Enter a valid option!!" << endl;
					}
		}
		
		cout << "Program ended!" << endl;
		a1.over();
}
