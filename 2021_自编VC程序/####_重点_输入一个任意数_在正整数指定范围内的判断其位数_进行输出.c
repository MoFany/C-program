#include<stdio.h>
#define MaxSize 1000000000//定义最大整数
#define MaxDigit 10//最大整数对应的位数
int main()
{
	int number,i,j=0,k;
	printf("请输入一个正整数(number):");
	scanf("%d",&number);
	if(number<=0 || MaxSize/number==0)
	{
		printf("错误:(number)超过指定范围!\n");
		return 0;
	}
	for(i=MaxSize;i>=1;i/=10)
		if(number/i%10==0)
			j++;
		else//原理:取高位空位位数，最大位数减去高位空着的位数
			break;
	k=MaxDigit-j;
	printf("正整数%d是一个%d位数!\n",number,k);
	return 0;
}