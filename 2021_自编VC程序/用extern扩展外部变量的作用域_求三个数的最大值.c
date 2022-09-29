#include<stdio.h>
int main()
	{
	int max(int x,int y);
	extern int Max;
	int a,b,c;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	Max=a;
	Max=max(max(b,c),Max);
	printf("Max=%d\n",Max);
	}
int Max;
int max(int x,int y)
	{
	return(x>y?x:y);
	}