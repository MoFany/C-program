#include<stdio.h>
int main()
	{
	void prime_number(int);
	int num;
	printf("Please enter a positive integer:");
	scanf("%d",&num);
	prime_number(num);
	return 0;
	}
void prime_number(int a)
{
	int i;
	for(i=2;i<a;i++)
		if(a%i==0)	break;
	if(i==a)
		printf("%d,Prime number\n",a);
	else
		printf("%d,Not prime\n",a);
}
