/* Program  in C to implement Iterative Method */

#include<stdio.h>
#include<math.h>

float F(float x)
{
	float e = 2.71828;
	return pow(e,-x);
}
float f(int x)
{
	float e = 2.71828;
	return x*pow(e,x) - 1;
}

int main()
{ 
int i=0,n;
float x1,x2,x0;
float f1,f2,f0, maxerr;

	printf("\n Enter the no. of iterations ");
	scanf("%d",&n);
	for(x1=1; ;x1++)
	{
		f1=f(x1);
		if(f1>0)
			break;
	}
	for(x0=x1-1; ;x0--)
	{
		f0=f(x0);
		if(f0<0)
			break;
	}
	x2=(x0+x1)/2;
	printf("\n\t The 1 approximation to the root is : %f",x2);
	for(i=0;i<n-1;i++)
	{
		f2=F(x2);
		printf("\n\t The %d approximatrion to the root is : %f",i+2,f2);
		x2=F(x2);
		f1=f2;
	}
	printf("\n\t now root = %.4f",f2);
return(0);
}
