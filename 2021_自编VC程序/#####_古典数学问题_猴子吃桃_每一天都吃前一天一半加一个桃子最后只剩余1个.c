#include<stdio.h>
int funcation(int day)
	{
		int temp=1;
		for(;day>0;day--)
			temp=(temp+1)*2;
		return temp;
	}
int main()
	{
		int day;
		printf("������ʣ��ֻ��1����������Ӧ������:");
		scanf("%d",&day);
		printf("��1��һ��ժ��%d������!\n",funcation(day));
		return 0;
	}