#include<stdio.h>
int Fibonac(int num)
	{
		if(num==1 || num==2)
			return 1;
		else
			return Fibonac(num-1)+Fibonac(num-2);//利用递归求数列前n项的值为
	}
int main()
	{
		int number,i;
		printf("请输入Fibonacci数列的项数(number):");
		scanf("%d",&number);
		for(i=1;i<=number;i++)
			printf("Fibonacci数列第%d项为:\t%-5d\n",i,Fibonac(i));
		return 0;
	}
