#include<stdio.h>
int main()//int型的main函数
{
	int a=1,b=1,c,t,i;

	for(i=1;i<=40;i++)//有40个Fibonacci数列
	{
	if(i%2!=0)//判断i求余2的结果
		{
		c=a+b;
		t=b;b=c;c=t;//交换值
		}
	else if(i%2==0)//否则判断i求余2的结果
		{
		c=a+b;
		t=a;a=c;c=t;//交换值
		}
	printf("%d\n",c);
	}
	
return 0;//main函数的返回值为0
}
