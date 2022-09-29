#include<stdio.h>

int main()
{
	int i,j;//1不是素数;一个大于1的自然数中，除了1和自己外不再有其他因数
	for(i=1;i<=100;i++)
		{
			for(j=2;j<i;j++)
				if(i%j==0)
					break;
			if(i==j)
				printf("素数:%d\n",i);
		}
	return 0;
}
