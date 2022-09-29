#include<stdio.h>
int main()
	{
//	int a,b,*p1=&a,*p2=&b,*p;//定义指针的同时让其指向某变量的地址；定义的同时初始化，一般不这样写。
	int a,b,*p1,*p2,*p;
	p1=&a;
	p2=&b;					//先定义，后对指针初始化。
	printf("Please enter a and b:");
	scanf("%d%d",p1,p2);//等价于scanf("%d%d",&a,&b);
	if(*p1>*p2)
		{p=p1;p1=p2;p2=p;}
	printf("From small to large output:%2d%2d\n",*p1,*p2);
	return 0;
	}
