#include<stdio.h>
int main()
	{
//	int a,b,*p1=&a,*p2=&b,*p;//����ָ���ͬʱ����ָ��ĳ�����ĵ�ַ�������ͬʱ��ʼ����һ�㲻����д��
	int a,b,*p1,*p2,*p;
	p1=&a;
	p2=&b;					//�ȶ��壬���ָ���ʼ����
	printf("Please enter a and b:");
	scanf("%d%d",p1,p2);//�ȼ���scanf("%d%d",&a,&b);
	if(*p1>*p2)
		{p=p1;p1=p2;p2=p;}
	printf("From small to large output:%2d%2d\n",*p1,*p2);
	return 0;
	}
