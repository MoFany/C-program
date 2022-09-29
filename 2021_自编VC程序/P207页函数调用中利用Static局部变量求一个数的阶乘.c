#include<stdio.h>
double fac(double n)
	{
	static double f=1;
	f=f*n;
	return(f);
	}
int main()
	{
	double fac(double);
	double a,i;
	printf("Please enter a:");
	scanf("%lf",&a);
	for(i=1;i<=a;i++)
		printf("%0.0f!=%0.0lf\n\n",i,fac(i));
	}