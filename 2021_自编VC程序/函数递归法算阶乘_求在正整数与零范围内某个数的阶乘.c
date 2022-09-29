#include<stdio.h>
double factorial(double n)
{
	double c;
	if(n==1 || n==0)//*0!=1，零的阶乘为1。
		c=1;
	else
		c=n*factorial(n-1);
	return(c);
}

int main()
{
	double factorial(double n);
	double a;
	printf("输入一个正整数：");
	scanf("%lf",&a);
	printf("该数的阶乘值为：%0.0lf\n",factorial(a));
	return 0;
}