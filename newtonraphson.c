/* Newton Raphson method program */

#include<stdio.h>
#include<math.h>

double F(double x)
{
	return ((x*x*x) - (2*x) - 5);
}
double Fd(double x)
{
	return ((3*x*x) - 2);
}

int main()
{
double fncvalue;
double x0, h, root, x1;
int miter,iter=1;

	printf("Enter the first approximation and the maximum number of iterations\n");
	scanf("%lf%d",&x0,&miter);

	while(iter<=miter)
	{
		h = F(x0)/Fd(x0);
		x1 = x0 - h; //x1=x0-f(x)/f&#39;(x)
		printf("The approximation&#39;s value after %d iteration is %.12lf\n",iter,x1);
		x0=x1;
		iter++;
	}

	if(root==x1)
	{
	printf("The root is: %.12lf\n",root);
	fncvalue = F(root);
	printf("Value of F(root) is: %.12lf",fncvalue);
	}
	else
	printf("The unsufficent number of iteration");
return(0);
}