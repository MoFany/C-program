#include<stdio.h>
int GetPower(int x,int y)
	{
		if(y==0)
			return 1;
		else
			return x*(GetPower(x,y-1));//�õݹ���x��y�η���x��y����������
	}
int main()
	{
		int base,index;
		printf("���������:base=");
		scanf("%d",&base);
		printf("������ָ��:index=");
		scanf("%d",&index);
		if(base==0)
			{
				printf("����(base)Ϊ:0\n");
				return 0;
			}
		else
			printf("�ʵó�:base^index:%d^%d=%d\n",base,index,GetPower(base,index));
		return 0;
	}
