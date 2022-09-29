#include<stdio.h>
int GetPower(int x,int y)
	{
		if(y==0)
			return 1;
		else
			return x*(GetPower(x,y-1));//用递归求x的y次方，x，y均键盘输入
	}
int main()
	{
		int base,index;
		printf("请输入底数:base=");
		scanf("%d",&base);
		printf("请输入指数:index=");
		scanf("%d",&index);
		if(base==0)
			{
				printf("底数(base)为:0\n");
				return 0;
			}
		else
			printf("故得出:base^index:%d^%d=%d\n",base,index,GetPower(base,index));
		return 0;
	}
