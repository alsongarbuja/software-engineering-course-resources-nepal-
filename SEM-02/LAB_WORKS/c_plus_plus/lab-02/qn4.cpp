#include <iostream>
using namespace std;

inline void convert(int p){
	cout << "The weight in kilos is " << p * 0.453592;
}

main (){
	int pounds;
	
		cout << "Enter the weight in pounds: ";
		cin >> pounds;
		
			convert(pounds);
}
