#include<stdio.h>
int max(int b[][4])
	{
	int j,k,max;
	max=b[0][0];
	for(j=0;j<3;j++)//��
		for(k=0;k<4;k++)//��
			if(b[j][k]>max)
				max=b[j][k];
	return max;
	}
int main()
	{
	int max(int b[][4]);//��������
	int a[3][4],i,h;
	printf("���������3��4�еĶ�ά����ĸ�������Ԫ�أ�");
	for(h=0;h<3;h++)//��
		for(i=0;i<4;i++)//��
			scanf("%d",&a[h][i]);
	printf("�ö�ά���������ֵΪ��max=%d\n",max(a));//��������
	return 0;
	}