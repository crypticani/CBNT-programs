/* Linear Equations Using the Inverse of a Matrix Program */

#include<stdio.h>

int main()
{
int a[ 20 ][ 20 ], b[5][5],AI[20][20],ANS[10][10],var, i, j,k,AM;

	printf("\nEnter the number of variables:" );
	scanf( "%d", &var );
	printf("\nEnter the coefficient of equation:");

	for ( i = 0;i < var;i++ )
	{
	for ( j = 0;j <var;j++ )
	{
		printf( "Enter the coefficient of x%d:", j + 1 );
		scanf( "%d", &a[i][j]);
	}
	}
	printf("\nEnter the constant matrix:");

	for ( i = 0;i < var;i++ )
	{
	for ( j = 0;j <1;j++ )
	{
		printf( "Enter the coefficient of x%d:", j + 1 );
		scanf( "%d", &b[i][j]);
	}
	}

// calculate A inverse
AM = 1 / ((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));
AI[0][0] = a[1][1]/AM;
AI[0][1] = -a[0][1]/AM;
AI[1][0] = -a[1][0]/AM;
AI[1][1] = a[0][0]/AM;

	printf("\n A inverse is:");

	for(i=0;i<var;i++)
	{
	for(j=0;j<var;j++)
	{
		printf("%d\t", AI[i][j]);
	}
		printf("\n");
	}
	printf("The solution of equaction is:\n");

	for(i=0;i<var;i++)
	{
	for(j=0;j<var;j++)
	{
	ANS[i][j] = 0;
	for(k=0;k<var;k++)
	{
		ANS[i][j]+=AI[i][k]*b[k][j];
	}
	}
	}

	for(i=0;i<var;i++)
	{
	for(j=0;j<1;j++)
		printf("%d\n",ANS[i][j]);
	}
return(0);
}