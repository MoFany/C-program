#include<stdio.h>
int main()
	{
	extern void Max_common_factor(int a,int b);
	extern void Min_common_multiple(int a,int b);//其中extern可省略，系统默认声明外部函数时，声明函数原型就可以
	int a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	Max_common_factor(a,b);
	Min_common_multiple(a,b);
	return 0;
	}