#include<stdio.h>
#include<math.h>

#define SIZE 30

int main()
{
	float x0, x1, x2, x, y, z;
	float e1,e2,e3,e;
	int n, i, j, step = 1;
	int mat[SIZE][SIZE];
	
	printf("Enter the number of unknowns: ");
	scanf("%d", &n);
	printf("Enter tolerable error: ");
	scanf("%f", &e);
	
	printf("Enter the linear equation in daigionally dominant format:\n");
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n+1; j++){
			printf("mat[%d][%d]", i, j);
			scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}
	
	x0 = x1 = x2 = 0;
	
	printf("Step\t\tx\t\ty\t\tz\n");
	
	do
	{
		x = (mat[0][3] - ((x1*mat[0][1]) + (x2*mat[0][2])))/mat[0][0];
		y = (mat[1][3] - ((x*mat[1][0]) + (x2*mat[1][2])))/mat[1][1];
		z = (mat[2][3] - ((x*mat[2][0]) + (y*mat[2][1])))/mat[2][2];
		
		printf("%d\t\t%0.4f\t\t%0.4f\t\t%0.4f\n", step, x, y, z);
		
		e1 = fabs(x0-x);
		e2 = fabs(x1-y);
		e3 = fabs(x2-z);
		
		step++;
		
		x0 = x;
		x1 = y;
		x2 = z;
	}while(e1 > e && e2 > e && e3 > e);
	
	printf("\nSolution is x = %0.4f, y = %0.4f, z = %0.4f", x, y, z);
	
	return 0;
}

/* Input and Output

Enter the number of unknowns: 3
Enter tolerable error: 0.0001
Enter the linear equation in daigionally dominant format:
mat[0][0]20
mat[0][1]1
mat[0][2]-2
mat[0][3]17

mat[1][0]3
mat[1][1]20
mat[1][2]-1
mat[1][3]-18

mat[2][0]2
mat[2][1]-3
mat[2][2]20
mat[2][3]25

Step            x               y               z
1               0.8500          -1.0275         1.0109
2               1.0025          -0.9998         0.9998
3               1.0000          -1.0000         1.0000
4               1.0000          -1.0000         1.0000

Solution is x = 1.0000, y = -1.0000, z = 1.0000

*/
