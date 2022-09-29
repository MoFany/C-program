#include<stdio.h>
int main()
	{
	void Max_common_factor(int a,int b);
	void Min_common_multiple(int a,int b);
	int a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	Max_common_factor(a,b);
	Min_common_multiple(a,b);
	return 0;
	}
void Max_common_factor(int a,int b)
	{
	int i,j,k=0;
	printf("Common factor:");
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a<b?a:b);j++)
			if((a>b?a:b)%i==0 && (a<b?a:b)%j==0)
				if(i==j)
					if(i>k)
					{k=i;printf("%4d",i);}//输出所有公因数(公约数);
	printf("\nMaximum common factor:%2d\n",k);//输出最大公因数(公约数);
	}
void Min_common_multiple(int a,int b)
	{
	int i,j,k=0,c[1000];//不能超过该数组所存储的范围
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a>b?a:b);j++)
			if(((a>b?a:b)*i)==((a<b?a:b)*j))
				//printf("%d ",((a>b?a:b)*i));//a*b范围内，求公倍数
				c[k++]=((a>b?a:b)*i);
	printf("Least common multiple:%2d\n",c[0]);
	}
