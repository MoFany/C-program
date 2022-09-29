#include<stdio.h>
int main()
	{
	void max(int,int);
	void min(int,int);
	void sum(void (*p1)(int,int),void (*p2)(int,int));
	sum(max,min);//用函数名做调用函数的实参，向形参传递max，min函数入口地址
	return 0;
	}
void sum(void (*p1)(int,int),void (*p2)(int,int))//用指向函数的指针变量做形参，函数指针变量p1,p2用于接收形参传来的max,min函数入口地址
	{
	int num,a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("Please enter 1 or 2 or 3:");
	scanf("%d",&num);
	if(num==1)
		(*p1)(a,b);//等价于：max(a,b);函数指针变量p1指向max的入口地址
	else if(num==2)
			(*p2)(a,b);//等价于：min(a,b);函数指针变量p2指向min的入口地址
		else if(num==3)
				printf("Sum=%d\n",a+b);
			else 
				printf("Input Error!\n");
	}
void max(int x,int y)
	{printf("Max=%d\n",x>y?x:y);}
void min(int x,int y)
	{printf("Min=%d\n",x<y?x:y);}

