#include<stdio.h>
void Fibonac(int number)
	{
		int i;
		long int f1,f2;
		f1=f2=1;
		printf("Fibonacci���е�ǰ%d���ֵ����Ϊ:\n",number);
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
		printf("������Ҫ�����Fibonacci���е�����(number):");
		scanf("%d",&number);
		Fibonac(number);
		return 0;
	}
