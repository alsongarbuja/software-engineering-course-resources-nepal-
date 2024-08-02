/*
code is incomplete
*/

#include <iostream>
#define MAXSIZE 20
using namespace std;

class SortAlgorithms
{
	public:
		void insertion(int, int []);
		void selection(int, int []);
		void quick(int, int []);
		void bubble(int, int, int, int []);
		void merge(int, int []);
		void heap(int, int []);
		
		void swap(int, int, int []);
		void dis(int, int []);
};

int main()
{
	int choice, n, input[MAXSIZE];
	SortAlgorithms sa; // object declaration
	
		while(1)
		{
			cout << "Enter number of elements: ";
			cin >> n;
			cout << "Enter " << n << " elements: " << endl;
	
				for(int i=0; i<n; i++)
				{
					cin >> input[i];		
				}
			
			cout << "SORTING" << endl;
			cout << "1.Inserting sort" << endl;
			cout << "2.Selection sort" << endl;
			cout << "3.Quick sort" << endl;
			cout << "4.Bubble sort" << endl;
			cout << "5.Merge sort" << endl;
			cout << "6.Heap sort" << endl;
			cout << "7.Exit" << endl;
			cout << "Enter choice: ";
			cin >> choice;
				
				switch(choice)
				{
					case 1:
						sa.insertion(n, input);
						break;
					case 2:
						sa.selection(n, input);
						sa.dis(n, input);
						break;
					case 3:
						sa.quick(n, input);
						break;
					case 4:
						for(int i=0; i<n-1; i++)
						{
							sa.bubble(0, 1, n, input);
						}
						sa.dis(n, input);
						break;
					case 5:
						sa.merge(n, input);
						break;
					case 6:
						sa.heap(n, input);
						break;
					case 7:
						exit(1);
//					case 1:
//						break;
					default:
						cout << "Invalid option!!" << endl;
				}
		}
	
	return 0;
}

void SortAlgorithms::insertion(int n, int arr[])
{
	
}

void SortAlgorithms::selection(int n, int arr[])
{	
	for(int i=0; i<n-1; i++)
	{
		for(int k=i+1; k<n; k++)
		{
			if(arr[k] < arr[i])
			{
				SortAlgorithms::swap(k, i, arr);	
			}
		}
	}
}

void SortAlgorithms::quick(int n, int arr[])
{
	
}

void SortAlgorithms::bubble(int start, int next, int n, int arr[])
{
		if(n == next){
			return;
		}
		if(arr[start] > arr[next]){
			SortAlgorithms::swap(start, next, arr);
		}
		
			SortAlgorithms::bubble(start+1, next+1, n, arr);
}

void SortAlgorithms::merge(int n, int arr[])
{
	
}

void SortAlgorithms::heap(int n, int arr[])
{
	
}

// Swaping elements function
void SortAlgorithms::swap(int index1, int index2, int arr[])
{
	int temp;
	
		temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
}

//displaying function
void SortAlgorithms::dis(int n, int arr[])
{
	for(int j=0; j<n; j++)
	{
		cout << arr[j] << " ";
	}
		cout << endl;
}
