#include<stdio.h>
#define M 3
#define N 4
void fun(int *p,int n)
	{
		int temp,i;
		for (i = 0; i < n / 2; i++)
			{
				temp = p[i];
				p[i] = p[n-1-i];
				p[n-1-i]= temp;
			}
		for (i = 0; i < n; i++)
			printf("%-4d",p[i]);
		printf("\n");
	}
int main()
{
	int a[M][N],i,j;
	printf("请输入%d个元素!\n",M*N);
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",*(a+i)+j);
	printf("输出原始数组元素值!\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			printf("%-4d",*(*(a+i)+j));
	printf("\n数组值反序存放!\n");
	fun(*a,M*N);//*a是列指针相当于&a[0][0],也就是以一维数组的操作方式操作二维数组
	return 0;
}