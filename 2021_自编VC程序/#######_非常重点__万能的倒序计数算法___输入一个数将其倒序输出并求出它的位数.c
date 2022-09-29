#include<stdio.h>
void ReverOrder(int number)
	{
		int base;
		printf("将该数倒序输出:");
		for(base=1;number/base>0;base*=10)
			printf("%d",number/base%10);
		printf("\n");
	}
void Count(int number)
	{
		int base,count=0;
		for(base=1;number/base>0;base*=10)
			count++;
		printf("这是一个%d位数!\n",count);
	}
int main()
	{
		int number;
		printf("请任意输入一个正整数!\n");
		scanf("%d",&number);
		ReverOrder(number);
		Count(number);
		return 0;
	}