
#include <stdio.h>
#include <math.h>

// defining decimal to binary function
void toBinary(int);

int main()
{
	int decimalNumber = 0;
	
	// reading the decimal number
	printf("Enter a decimal number: ");
	scanf("%d", &decimalNumber);
	
	// calling the conversion function
	toBinary(decimalNumber);
}

// function to convert the decimal to binary
// @param decimalNumber - integer
// @return void
void toBinary(int decimalNumber)
{
	int binaryNumber = 0, reminder = 0, x = 1;
	
	// decimal to binary converting logic
	while(decimalNumber != 0)
	{
		reminder = decimalNumber%2;
		binaryNumber += reminder*x;
		decimalNumber /= 2;
		
		x *= 10;
	}
	
	printf("The binary is %d", binaryNumber);
}
