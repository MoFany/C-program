#include<stdio.h>
#define row 3
#define col 2
void mumat()
{
	int i,j,k;
	int A[row][col]={2,-1,-4,0,3,1},B[col][col]={7,-9,-8,10},C[row][col];//����˷�:ǰһ����ά����������һ����ά����Ķ�Ӧ�е�Ԫ�����
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			for(C[i][j]=0,k=0;k<col;k++)
				C[i][j]+=A[i][k]*B[k][j];
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
				printf("%5d",C[i][j]);
			printf("\n");
		}
}
int main()
{
	mumat();
	return 0;
}