
#include <stdio.h>
#include <math.h>

// defining the binary to decimal function
void toDecimal(int);

int main()
{
	int binaryNumber = 0;
	
	// Reading the binary number
	printf("Enter a binary number: ");
	scanf("%d", &binaryNumber);
	
	// calling the conversion function
	toDecimal(binaryNumber);
}

// function to convert from binary to decimal
// @param binaryNumber-integer
// @return void
void toDecimal(int binaryNumber)
{
	int decimalNumber = 0, reminder = 0, x = 0;
	
	// converting the binary to decimal logic
	while(binaryNumber != 0)
	{
		reminder = binaryNumber%10;
		binaryNumber /= 10;
		decimalNumber += reminder*pow(2, x);
		
		x++;
	}
	
	printf("The decimal is %d", decimalNumber);
}
