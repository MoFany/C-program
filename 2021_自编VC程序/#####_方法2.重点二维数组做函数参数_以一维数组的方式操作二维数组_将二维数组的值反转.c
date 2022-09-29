#include<stdio.h>
#define M 3
#define N 4
int main()
{
	int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12},* p=*a,temp,i,n=M*N;
	for(i=0;i<n/2;i++)
	{
		temp=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=temp;
	}
	for (i=0;i<n;i++)
		printf("%-4d",*(p+i));
	printf("\n");
	return 0;
}