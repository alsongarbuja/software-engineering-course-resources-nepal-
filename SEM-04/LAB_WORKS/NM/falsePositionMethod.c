
/*False position method of finding root of a polynomial equation*/

#include<stdio.h>
#include<math.h>

#define f(x) x*log10(x) - 1.2

int main()
{
	float x0,x1,x2,f0,f1,f2,e;
	int step = 1;
	
	up:
	//Reading the intial guesses
	printf("\nEnter the initial guessess:\n");
	scanf("%f%f", &x0, &x1);
	
	// Reading the tolerable error
	printf("Enter tolerable error:\n");
	scanf("%f", &e);
	
	// using value of x0 and x1 in the function
	f0 = f(x0);
	f1 = f(x1);
	
	// if the product is more then zero then
	// no root is inside of the initial guesses
	// so moving back up
	if(f0*f1 > 0.0){
		printf("Incorrect initial guesses\n");
		goto up;
	}
	
	printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	
	// calculating the root until the f(x2) is greater than tolerable error
	do
	{
		// finding the next approximated root
		x2 = x0 - (x0-x1) * f0/(f0-f1);
		f2 = f(x2);
		
		printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\n", step, x0, x1, x2, f2);
		
		// changing the values of x0, x1, f0 and f1 according to 
		// the condition
		if(f0*f2 < 0){
			x1 = x2;
			f1 = f2;
		}else{
			x0 = x2;
			f0 = f2;
		}
		
		step++;
	}while(fabs(f2) > e);
	
	// Printing the root x2
	printf("\nRoot is: %f", x2);
	
	
	return 0;
}

/*
----------------
Input and Output
----------------

Enter the initial guessess:
2
3
Enter tolerable error:
0.000001

Step            x0              x1              x2              f(x2)
1               2.000000                3.000000                2.721014                -0.017091
2               2.721014                3.000000                2.740206                -0.000384
3               2.740206                3.000000                2.740636                -0.000009
4               2.740636                3.000000                2.740646                -0.000000

Root is: 2.740646

*/
