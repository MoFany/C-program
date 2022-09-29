#include<stdio.h>
int fun(int num)
{
	if(num==1)
		return 1;
	else
		return num+fun(num-1);
}
int main()
{
	int number;
	printf("Please enter number:");
	scanf("%d",&number);
	printf("1+2+3...+%d=%d\n",number,fun(number));
	return 0;
}