#include<stdio.h>
int main()
	{
	void array_transpose(int array[][3]);
	int a[3][3],i,j;
	printf("Please enter array element:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	array_transpose(a);
	return 0;
	}
void array_transpose(int array[][3])
	{
	int i,j,b[3][3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			b[j][i]=array[i][j];//数组转置，行列互换
	printf("Array Transpose:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)	
		{printf("%d ",b[i][j]);
		if(j==2) printf("\n");}//每列输出满3个元素换行
	}