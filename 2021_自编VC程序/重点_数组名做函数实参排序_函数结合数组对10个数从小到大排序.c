#include<stdio.h>
void sort(int b[])
	{
	int j,k,t;
	for(j=0;j<9;j++)
		for(k=0;k<9;k++)
			if(b[k]>b[k+1])
			{t=b[k];b[k]=b[k+1];b[k+1]=t;}
	}
int main()
	{
	void sort(int b[]);
	int a[10],i;
	printf("请随机乱序输入10个整数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a);
	printf("从小到大排序输出：");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
	}