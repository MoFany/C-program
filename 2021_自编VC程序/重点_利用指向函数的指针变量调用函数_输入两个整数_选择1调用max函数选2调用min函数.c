#include<stdio.h>
int main()
	{
	void max(int,int);
	void min(int,int);
	void (*p)(int,int);//����һ��ָ�����ͺ�����ָ�����p���Ҹ����ͺ��������������Ͳ���
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

