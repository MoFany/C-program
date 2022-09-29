#include<stdio.h>
int main()
	{
	int a,b,i,j,k=0;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("Common factor:");
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a<b?a:b);j++)
			if((a>b?a:b)%i==0 && (a<b?a:b)%j==0)
				if(i==j)
					if(i>k)
					{k=i;printf("%4d",i);}//输出所有公因数(公约数);
	printf("\nMaximum common factor:%2d\n",k);//输出最大公因数(公约数);
	return 0;
	}
