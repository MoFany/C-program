#include<stdio.h>
int main()
	{
	int sum=0,s=0,i,j;
	int a[5][5];
	printf("输入5*5矩阵的值!\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",*(a+i)+j);//地址法输入二维数组的元素值
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(i==j)
				sum=sum+a[i][j];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			{
			if(i==j) 
					;
				else
					if(i+j==4)
						s=s+a[i][j];
			}
	printf("5*5矩阵对角线之和为:%d\n",s+sum);
	return 0;
	}

