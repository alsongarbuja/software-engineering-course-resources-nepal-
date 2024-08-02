#include <iostream>
using namespace std;

class LinearQueue
{
	int front, rear, data, item;
	int maxSize;
	int *queueArray;
	
		public:
//			constructor for initializing variables
			LinearQueue(int size){
				maxSize = size;
				front = rear = 0;
				queueArray = new int[maxSize];
			}
			
//			to check if the queue is empty or not
			bool isEmpty(){
				if(front == rear){
					return true;
				}
				return false;
			}
			
//			to check if the queue is full or not
			bool isFull(){
				if(rear >= maxSize){
					return true;
				}
				return false;
			}
			
//			to insert data into the queue
			void Insert()
			{
				if(isFull()){
					cout << "Queue is full, cannot insert anymore data." << endl;
				}else{
					cout << "Enter a data: ";
					cin >> data;
					
						queueArray[rear] = data;
						cout << "Data inserted: " << queueArray[rear] << endl;
						rear++;
				}
			}
			
//			to delete data from the queue
			void Delete()
			{
				if(isEmpty()){
					cout << "Queue is empty, cannot delete data." << endl;
				}else{
					item = queueArray[front];
					cout << "Deleted the data: " << queueArray[front] << endl;
					front++;
					
						if(front == rear){
							front = rear = 0;
						}
				}
			}
			
//			to display datas in the queue
			void dis()
			{
				if(front == rear){
					cout << "Queue is empty nothing to display." << endl;
				}else{
					for(int i=front; i<rear; i++){
						cout << queueArray[i] << " ";
					}
					cout << endl;
				}
			}
			
//			to finish the program and delete the queue array
			void finish()
			{
				cout << "Program ended!!" << endl;
				delete[] queueArray;
			}
};

main()
{
	int size, choice = 1;
	
		cout << "Enter the size of the queue: ";
		cin >> size;
		
//		creating a object for LinearQueue class
	LinearQueue L1(size);
	
//	while loop for giving options
		while(choice != 0)
		{
			cout << "Enter a option:" << endl;
			cout << "1,Insert\n2,Delete\n3,Display\n4,CheckEmpty\n5,CheckFull\n0,Exit" << endl;
			cin >> choice;
			
				switch(choice)
				{
					case 1:
						L1.Insert();
						break;
					case 2:
						L1.Delete();
						break;
					case 3:
						L1.dis();
						break;
					case 4:
						if(L1.isEmpty()){
							cout << "Queue is empty." << endl;
						}else{
							cout << "Queue is not empty." << endl;
						}
						break;
					case 5:
						if(L1.isFull()){
							cout << "Queue is Full." << endl;
						}else{
							cout << "Queue is not Full." << endl;
						}
						break;	
				}
				
//				checking for valid option
					if(choice < 0 || choice >= 6)
					{
						cout << "Enter a valid option!!" << endl;
					}
		}
//		finishing the program upon choice = 0
			L1.finish();
}


