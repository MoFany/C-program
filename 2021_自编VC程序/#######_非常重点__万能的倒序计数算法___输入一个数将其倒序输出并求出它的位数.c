#include<stdio.h>
void ReverOrder(int number)
	{
		int base;
		printf("�������������:");
		for(base=1;number/base>0;base*=10)
			printf("%d",number/base%10);
		printf("\n");
	}
void Count(int number)
	{
		int base,count=0;
		for(base=1;number/base>0;base*=10)
			count++;
		printf("����һ��%dλ��!\n",count);
	}
int main()
	{
		int number;
		printf("����������һ��������!\n");
		scanf("%d",&number);
		ReverOrder(number);
		Count(number);
		return 0;
	}