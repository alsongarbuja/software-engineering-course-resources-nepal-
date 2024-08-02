
/*Bisection method of finding root of a polynomial equation*/

#include<stdio.h>
#include<math.h>

// Defining the function
#define f(x) cos(x)-x*exp(x)

int main()
{
	float x0,x1,x2,f0,f1,f2,e;
	int step = 1;
	
	up:
	// Reading the initial brackets or guesses
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
		x2 = (x0+x1)/2;
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
0
1
Enter tolerable error:
0.0001

Step            x0              x1              x2              f(x2)
1               0.000000                1.000000                0.500000                0.053222
2               0.500000                1.000000                0.750000                -0.856061
3               0.500000                0.750000                0.625000                -0.356691
4               0.500000                0.625000                0.562500                -0.141294
5               0.500000                0.562500                0.531250                -0.041512
6               0.500000                0.531250                0.515625                0.006475
7               0.515625                0.531250                0.523438                -0.017362
8               0.515625                0.523438                0.519531                -0.005404
9               0.515625                0.519531                0.517578                0.000545
10              0.517578                0.519531                0.518555                -0.002427
11              0.517578                0.518555                0.518066                -0.000940
12              0.517578                0.518066                0.517822                -0.000197
13              0.517578                0.517822                0.517700                0.000174
14              0.517700                0.517822                0.517761                -0.000012

Root is: 0.517761

*/
