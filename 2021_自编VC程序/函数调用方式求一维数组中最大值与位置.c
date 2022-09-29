#include<stdio.h>
int max(int x,int y)
	{
	return(x>y?x:y);
	}
int main()
	{
	int max(int x,int y);
	int a[10],m,n,i;
	printf("enter 10 integer number:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	m=a[0];
	for(i=1,n=0;i<10;i++)
		{
			if(max(m,a[i])>m)
			{
			m=max(m,a[i]);
			n=i;
			}
		}
	printf("The largest number is %d.\nIt is the %dth number.\n",m,n+1);
	}
//输入10个数，要求输出其中最大的元素和该数是第几位数。
