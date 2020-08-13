/* Trapezoidal rule */

#include <stdio.h>
#include <math.h>

float fun(float);

int main()
{
float result=1;	
float a,b;
float h,sum;
int i,j;
int n;

	printf("\n\n Enter the range - ");
	printf("\n\n Lower Limit a - ");
	scanf("%f",&a);
	printf("\n\n Upper Limit b: ");
	scanf("%f",&b);
	printf("\n\n Enter number of subintervals: ");
	scanf("%d",&n);

	h=(b-a)/n;
	sum=0;
	sum=fun(a)+fun(b);

	for(i=1;i<n;i++)
	{
		sum+=2*fun(a+(i*h));
	}

	result=(sum*h)/2;

	printf("\n\n\n Value of the integral is %6.4f\t",result);
	printf("\n\n\n Press Enter to Exit");
return(0);
}

float fun(float x)
{
	float temp;
	temp = 1/(1+(x*x));
	return temp;
}
