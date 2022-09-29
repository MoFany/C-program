#include<stdio.h>
int main()
	{
	int max(int,int);
	int (*p)(int,int);//定义一个指向整型函数的指针变量p，且该整型函数包含两个整型参数
	int a,b;
	p=max;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("Max=%d\n",(*p)(a,b));//通过指针变量调用max函数
	return 0;
	}
int max(int x,int y)
	{
	return(x>y?x:y);
	}
