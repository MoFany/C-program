#include<stdio.h>
int num_fun1(int a,int b)
{
	int i,max,min;
	min=a<b?a:b;
	for(i=1;i<=min;i++)
		if(a%i==0 && b%i==0)
			max=i;
	printf("�������Ϊ��%d\n",max);
	return max;
}
int num_fun2(int a,int b)
{
	int min;
	min=(a*b)/num_fun1(a,b);
	return min;
}
int main()
{
	int a,b;
	printf("����������������");
	scanf("%d%d",&a,&b);
	printf("���������������������С������!\n");
	printf("��С������Ϊ��%d\n",num_fun2(a,b));
	return 0;
}