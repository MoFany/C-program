#include<stdio.h>
int main()
{

	int i,j,k;
	for(i=0;i<4;i++)
		{
		for(j=3;j>i;j--)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("*");
		printf("\n");
		}
/*----------------------------------------------*/
	for(i=2;i>=0;i--)
		{
		for(j=3;j>i;j--)
			printf(" ");
		for(k=1;k<=2*i+1;k++)
			printf("*");
		printf("\n");
		}

return 0;
}
