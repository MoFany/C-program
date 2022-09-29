#include<stdio.h>
#define MaxSize 101
int main()
	{
		int sum=0,s,i,j;
		for(i=1;i<MaxSize;i+=2)
		{
			for(s=1,j=i;j<=i+2;j++)
				s=s*j;
			sum=sum+s;
		}
		printf("%d\n",sum);
		return 0;
	}
