
/*Secant method of finding root of a polynomial equation*/

#include<stdio.h>
#include<math.h>

#define f(x) x*x*x - 2*x - 5

int main()
{
	float x0,x1,x2,f0,f1,f2,e;
	int step = 1, N;
	
	//Reading the intial guesses
	printf("\nEnter the initial guessess:\n");
	scanf("%f%f", &x0, &x1);
	
	// Reading the tolerable error
	printf("Enter tolerable error:\n");
	scanf("%f", &e);
	
	// Reading the maximum number of iteration
	printf("Enter maximum number of iteration:\n");
	scanf("%d", &N);
	
	printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	
	// calculating the root until the f(x2) is greater than tolerable error
	do
	{
		// using value of x0 and x1 in the function
		f0 = f(x0);
		f1 = f(x1);
		
		// if the product is more then zero then
		// no root is inside of the initial guesses
		// so moving back up
		if(f0 == f1){
			printf("Mathematical Error.\n");
			exit(0);
		}
		
		// finding the next approximated root
		x2 = x1 - (x1-x0) * f1/(f1-f0);
		f2 = f(x2);
		
		printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\n", step, x0, x1, x2, f2);
		
		// changing the values of x0, x1, f0 and f1 
		x0 = x1;
		f0 = f1;
		x1 = x2;
		f1 = f2;
		
		step++;
		
		// if steps are greater than maximum iteration
		// stop the program
		if(step > N)
		{
		   printf("Not Convergent.");
		   exit(0);
		}
		  
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
1
2
Enter tolerable error:
0.00001
Enter maximum number of iteration:
10

Step            x0              x1              x2              f(x2)
1               1.000000                2.000000                2.200000                1.248001
2               2.000000                2.200000                2.088968                -0.062123
3               2.200000                2.088968                2.094233                -0.003557
4               2.088968                2.094233                2.094553                0.000011
5               2.094233                2.094553                2.094552                0.000001

Root is: 2.094552

*/
