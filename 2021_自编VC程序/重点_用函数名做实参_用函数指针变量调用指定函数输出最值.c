#include<stdio.h>
int main()
	{
	void max(int,int);
	void min(int,int);
	void sum(void (*p1)(int,int),void (*p2)(int,int));
	sum(max,min);//�ú����������ú�����ʵ�Σ����βδ���max��min������ڵ�ַ
	return 0;
	}
void sum(void (*p1)(int,int),void (*p2)(int,int))//��ָ������ָ��������βΣ�����ָ�����p1,p2���ڽ����βδ�����max,min������ڵ�ַ
	{
	int num,a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("Please enter 1 or 2 or 3:");
	scanf("%d",&num);
	if(num==1)
		(*p1)(a,b);//�ȼ��ڣ�max(a,b);����ָ�����p1ָ��max����ڵ�ַ
	else if(num==2)
			(*p2)(a,b);//�ȼ��ڣ�min(a,b);����ָ�����p2ָ��min����ڵ�ַ
		else if(num==3)
				printf("Sum=%d\n",a+b);
			else 
				printf("Input Error!\n");
	}
void max(int x,int y)
	{printf("Max=%d\n",x>y?x:y);}
void min(int x,int y)
	{printf("Min=%d\n",x<y?x:y);}

