#include<stdio.h>
void Fibonac(int number)
	{
		int i;
		long int f1,f2;
		f1=f2=1;
		printf("Fibonacci数列的前%d项的值依次为:\n",number);
		for(i=1;i<=number/2;i++)
			{
				printf("%12ld%12ld",f1,f2);
				if(i%4==0)
					printf("\n");
				f1=f1+f2;
				f2=f2+f1;
			}
		putchar(10);
	}
int main()
	{
		int number;
		printf("请输入要计算的Fibonacci数列的项数(number):");
		scanf("%d",&number);
		Fibonac(number);
		return 0;
	}
