#include<stdio.h>
int Fibonac(int num)
	{
		if(num==1 || num==2)
			return 1;
		else
			return Fibonac(num-1)+Fibonac(num-2);//���õݹ�������ǰn���ֵΪ
	}
int main()
	{
		int number,i;
		printf("������Fibonacci���е�����(number):");
		scanf("%d",&number);
		for(i=1;i<=number;i++)
			printf("Fibonacci���е�%d��Ϊ:\t%-5d\n",i,Fibonac(i));
		return 0;
	}
