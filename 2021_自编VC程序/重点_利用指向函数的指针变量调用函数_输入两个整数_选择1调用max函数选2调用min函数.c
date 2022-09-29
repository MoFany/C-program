#include<stdio.h>
int main()
	{
	void max(int,int);
	void min(int,int);
	void (*p)(int,int);//定义一个指向整型函数的指针变量p，且该整型函数包含两个整型参数
	int a,b,num;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("Please enter 1 or 2:");
	scanf("%d",&num);
	if(num==1)
		{p=max;(*p)(a,b);}
	else 
		if(num==2)
			{p=min;(*p)(a,b);}
		else
			printf("Input Error!\n");
	return 0;
	}
void max(int x,int y)
	{
	printf("Max=%d\n",x>y?x:y);
	}
void min(int x,int y)
	{
	printf("Min=%d\n",x<y?x:y);
	}

