#include<stdio.h>
int max(int b[][4])
	{
	int j,k,max;
	max=b[0][0];
	for(j=0;j<3;j++)//行
		for(k=0;k<4;k++)//列
			if(b[j][k]>max)
				max=b[j][k];
	return max;
	}
int main()
	{
	int max(int b[][4]);//函数声明
	int a[3][4],i,h;
	printf("请随机输入3行4列的二维数组的各个整数元素：");
	for(h=0;h<3;h++)//行
		for(i=0;i<4;i++)//列
			scanf("%d",&a[h][i]);
	printf("该二维数组中最大值为：max=%d\n",max(a));//函数调用
	return 0;
	}