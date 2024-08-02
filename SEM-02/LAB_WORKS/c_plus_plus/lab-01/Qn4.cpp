#include <iostream>
using namespace std;

void check_prime(int n){
	int i, count = 0;
	
		for (i=2; i<n; i++){
			if (n%i == 0){
				cout << "The number is not prime.";
				count++;
				break;
			}
			
		}
		
			if(count == 0)
				cout << "The number is prime.";
}

main(){
	int num;
	
		cout << "Enter a number: ";
		cin >> num;
		
			check_prime(num);
}
