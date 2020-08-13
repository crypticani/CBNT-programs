/* Program in C to implement Regula Falsi Method */
#include<stdio.h>

float f(float x)
{
	return (x * x * x) - (2 * x) - 5;
}
void regula (float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
	*x = x0 - ((x1 - x0) / (fx1 - fx0))*fx0;
	++(*itr);
	printf("Iteration no. %3d X = %7.5f \n", *itr, *x);
}

int main ()
{
int itr = 0, maxmitr;
float x0,x1,x2,x3,allerr;

	printf("\nEnter the values of x0, x1, and maximum iterations:\n");
	scanf("%f %f %d", &x0, &x1, &maxmitr);
	regula (&x2, x0, x1, f(x0), f(x1), &itr);
	do {
		if (f(x0)*f(x2)< 0)
			x1=x2;
		else
			x0=x2;
		regula (&x3, x0, x1, f(x0), f(x1), &itr);
		x2=x3;
}
	while (itr<maxmitr);
		//printf("Solution does not converge or iterations not sufficient:\n");
    
return(0);
}