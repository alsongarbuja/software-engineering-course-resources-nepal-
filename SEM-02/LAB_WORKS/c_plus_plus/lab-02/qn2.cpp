#include <iostream>
using namespace std;

//code is little bit improved
//But still if two same number is given with 3rd one then last one will be largest

inline void check_large(int a, int b, int c){
	if (a>b){
			if(a>c){
				cout << "The first one is largest.";
			}else
				cout << "The last one is largest.";
	}
	else if (b>c)
		cout << "The second one is largest.";
	else 
		cout << "The third one is largest.";	
}

main(){
	int num1, num2, num3;
	
	cout << "Enter three numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	
		check_large(num1, num2, num3);
		
}
