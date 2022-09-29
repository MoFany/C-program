#include<stdio.h>
int num_fun1(int a,int b)
{
	int i,max,min;
	min=a<b?a:b;
	for(i=1;i<=min;i++)
		if(a%i==0 && b%i==0)
			max=i;
	printf("最大公因数为：%d\n",max);
	return max;
}
int num_fun2(int a,int b)
{
	int min;
	min=(a*b)/num_fun1(a,b);
	return min;
}
int main()
{
	int a,b;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	printf("求两个数的最大公因数与最小公倍数!\n");
	printf("最小公倍数为：%d\n",num_fun2(a,b));
	return 0;
}