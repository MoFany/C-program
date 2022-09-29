#include<stdio.h>
int fac(int n)
	{
		if(n==1)
			return 1;
		else
			return n*fac(n-1);//平均每一个数的阶乘
	}
int fac_sum(int m)
	{
		if(m==1)
			return 1;
		else
			return fac_sum(m-1)+fac(m);//共求n个数的阶乘和
	}
void print(int number)
	{
		if(number==0)
			printf("%d!=%d\n",number,fac(!number));//0的阶乘为1
		else
			if(number==1)
				printf("%d!=%d\n",number,fac(number));
			else
				printf("1!...+%d!=%d\n",number,fac_sum(number));
	}
int main()
	{
		int number;
		printf("求阶乘和,请输入一个整数:");
		scanf("%d",&number);
		print(number);
		return 0;
	}
