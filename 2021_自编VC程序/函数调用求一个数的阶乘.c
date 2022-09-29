#include<stdio.h>
double factorial(double n)
	{
	static double fac=1,i;
	if(n==1 || n==0)
		fac=1;
	else
		//fac=n*factorial(n-1);
		for(i=1;i<=n;i++)
			fac=fac*i;
	return(fac);
	}
int main()
	{
	double factorial(double n);
	double a;
	printf("Please enter a:");
	scanf("%lf",&a);
	printf("%0.0f!=%0.0lf\n",a,factorial(a));
	return 0;
	}