#include<stdio.h>
#include<math.h>

/* Defining equation to be solved.
   Change this equation to solve another problem. */
#define    f(x)    3*x - cos(x) -1

/* Defining derivative of g(x).
   As you change f(x), change this function also. */
#define   g(x)   3 + sin(x)

void main()
{
	 float x0, x1, f0, f1, g0, e;
	 int step = 1, N;
	 
     /* Inputs */
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 
	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);
	 
	 /* Implementing Newton Raphson Method */
	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }

		
		  x1 = x0 - f0/g0;

		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step = step+1;
		
		  if(step > N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1)>e);
	
	 printf("\nRoot is: %f", x1);
}

/*
----------------
Input and Output
----------------

Enter initial guess:
1
Enter tolerable error:
0.00001
Enter maximum iteration:
10

Step            x0              f(x0)           x1              f(x1)
1               1.000000        1.459698        0.620016        0.000000
2               0.620016        0.046179        0.607121        0.046179
3               0.607121        0.000068        0.607102        0.000068

Root is: 0.607102

*/
