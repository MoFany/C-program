#include<stdio.h>
int fac(int n)
	{
		if(n==1)
			return 1;
		else
			return n*fac(n-1);//ƽ��ÿһ�����Ľ׳�
	}
int fac_sum(int m)
	{
		if(m==1)
			return 1;
		else
			return fac_sum(m-1)+fac(m);//����n�����Ľ׳˺�
	}
void print(int number)
	{
		if(number==0)
			printf("%d!=%d\n",number,fac(!number));//0�Ľ׳�Ϊ1
		else
			if(number==1)
				printf("%d!=%d\n",number,fac(number));
			else
				printf("1!...+%d!=%d\n",number,fac_sum(number));
	}
int main()
	{
		int number;
		printf("��׳˺�,������һ������:");
		scanf("%d",&number);
		print(number);
		return 0;
	}
