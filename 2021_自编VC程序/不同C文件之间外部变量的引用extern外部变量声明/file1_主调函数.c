#include<stdio.h>
extern A,B,M;
int main()
{
	int exponent(int,int);
	printf("Please enter A and M:");
	scanf("%d%d",&A,&M);
	printf("a*b=%d\na**m=%d\n",A*B,	exponent(A,M));
	return 0;
}
