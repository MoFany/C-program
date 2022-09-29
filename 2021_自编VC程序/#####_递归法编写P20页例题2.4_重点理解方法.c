#include<stdio.h>
float fac(float n)
	{
		if(n==1)
			return 1;
		else
			return fac(n-1)/-n;
	}
float sum_fac(float n)
	{
		if(n==0)
			return 0;
		else
			return sum_fac(n-1)+fac(n);
	}
int main()
	{
		float n;
		printf("Please enter n:");
		scanf("%f",&n);
		printf("Sum=%f\n",sum_fac(n));
		return 0;
	}