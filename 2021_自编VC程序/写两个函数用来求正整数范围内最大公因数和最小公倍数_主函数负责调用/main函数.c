#include<stdio.h>
int main()
	{
	extern void Max_common_factor(int a,int b);
	extern void Min_common_multiple(int a,int b);//����extern��ʡ�ԣ�ϵͳĬ�������ⲿ����ʱ����������ԭ�;Ϳ���
	int a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	Max_common_factor(a,b);
	Min_common_multiple(a,b);
	return 0;
	}