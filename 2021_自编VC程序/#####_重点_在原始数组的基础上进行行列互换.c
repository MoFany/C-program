#include<stdio.h>
int main()
{
	int a[3][3], temp, i, j;
	printf("初始化并输出二维数组!\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
			printf("%-2d", a[i][j]);

		}
		printf("\n");
	}
	printf("将该数组行列互换!\n");
	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)//内层循环的j的初始值每次随i值的变化而变化,因为该数组转置只是在原始数组的基础上进行行列互换
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	printf("将该数组行列互换后输出!\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%-2d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}