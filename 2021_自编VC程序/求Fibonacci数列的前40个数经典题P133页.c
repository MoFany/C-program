#include<stdio.h>
int main()//int�͵�main����
{
	int a=1,b=1,c,t,i;

	for(i=1;i<=40;i++)//��40��Fibonacci����
	{
	if(i%2!=0)//�ж�i����2�Ľ��
		{
		c=a+b;
		t=b;b=c;c=t;//����ֵ
		}
	else if(i%2==0)//�����ж�i����2�Ľ��
		{
		c=a+b;
		t=a;a=c;c=t;//����ֵ
		}
	printf("%d\n",c);
	}
	
return 0;//main�����ķ���ֵΪ0
}
