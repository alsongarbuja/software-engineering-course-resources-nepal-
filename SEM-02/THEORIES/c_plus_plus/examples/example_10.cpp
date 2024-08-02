#include<iostream> 
using namespace std; 

int main()
{  
	int nu,de,res;  
		cout<<"Enter numerator and denominator";  
		cin>>nu>>de;  
		
			try{   
				if(de==0){    
					throw(de); //throw int object      
				}else{
				    res=nu/de;    
					cout<<"Result= "<<res;   
				}  
			}   
			catch(int i)  //catches the int type exception  
			{   
				cout<<"Divide by zero exception occurred: de= "<<i;  
			}  
}
