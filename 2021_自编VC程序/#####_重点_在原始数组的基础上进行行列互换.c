#include<stdio.h>
int main()
{
	int a[3][3], temp, i, j;
	printf("��ʼ���������ά����!\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
			printf("%-2d", a[i][j]);

		}
		printf("\n");
	}
	printf("�����������л���!\n");
	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)//�ڲ�ѭ����j�ĳ�ʼֵÿ����iֵ�ı仯���仯,��Ϊ������ת��ֻ����ԭʼ����Ļ����Ͻ������л���
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	printf("�����������л��������!\n");
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