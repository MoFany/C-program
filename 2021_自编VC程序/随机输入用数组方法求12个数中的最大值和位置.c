#include<stdio.h>
int main()
{
	int a[3][4],max,i,j;
	int h,l;
	printf("请输入二维数组的值：\n");

	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);

	max=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)			
			if(a[i][j]>max)
				{max=a[i][j];
				h=i;
				l=j;}
	printf("max=%d\n%d,%d\n",max,h,l);
return 0;
}