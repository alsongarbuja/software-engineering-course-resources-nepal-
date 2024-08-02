#include <iostream>
using namespace std;

inline void convert(int f){
	cout << "The temperature in celcius is " << ((f-32)*5)/9;
}

main (){
	int farenhiet;
	
		cout << "Enter the temp. in farenhiet: ";
		cin >> farenhiet;
		
			convert(farenhiet);
}
