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
	printf("������%d��Ԫ��!\n",M*N);
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",*(a+i)+j);
	printf("���ԭʼ����Ԫ��ֵ!\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			printf("%-4d",*(*(a+i)+j));
	printf("\n����ֵ������!\n");
	fun(*a,M*N);//*a����ָ���൱��&a[0][0],Ҳ������һά����Ĳ�����ʽ������ά����
	return 0;
}