#include<stdio.h>
int main()
	{
	int max(int,int);
	int (*p)(int,int);//����һ��ָ�����ͺ�����ָ�����p���Ҹ����ͺ��������������Ͳ���
	int a,b;
	p=max;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("Max=%d\n",(*p)(a,b));//ͨ��ָ���������max����
	return 0;
	}
int max(int x,int y)
	{
	return(x>y?x:y);
	}
