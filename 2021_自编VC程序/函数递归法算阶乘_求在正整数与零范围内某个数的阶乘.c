#include<stdio.h>
double factorial(double n)
{
	double c;
	if(n==1 || n==0)//*0!=1����Ľ׳�Ϊ1��
		c=1;
	else
		c=n*factorial(n-1);
	return(c);
}

int main()
{
	double factorial(double n);
	double a;
	printf("����һ����������");
	scanf("%lf",&a);
	printf("�����Ľ׳�ֵΪ��%0.0lf\n",factorial(a));
	return 0;
}