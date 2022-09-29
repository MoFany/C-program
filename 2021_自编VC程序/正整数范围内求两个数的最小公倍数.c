#include<stdio.h>
int main()
	{
	int a,b,i,j,k=0,c[100];//c[100]不能超过该数组的范围限制
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a>b?a:b);j++)
			if(((a>b?a:b)*i)==((a<b?a:b)*j))
				//printf("%d ",((a>b?a:b)*i));//a*b范围内，求公倍数
				c[k++]=((a>b?a:b)*i);
	printf("%d\n",c[0]);
	return 0;
	}
