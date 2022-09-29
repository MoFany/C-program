#include<stdio.h>
int main()
	{
	int a,i;
	printf("Please enter a:");
	scanf("%d",&a);
	for(i=2;i<a;i++)//1²»ÊÇËØÊý
		if(a%i==0)	break;
	if(i==a)
		printf("%d,Prime number\n",a);
	else
		printf("%d,Not prime\n",a);
	return 0;
	}
