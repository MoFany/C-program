#include<stdio.h>
int main()
	{
	void score(int (*p1)[4],int n);
	int array[3][4],i;
	int *pointer_1;
	printf("������3λͬѧ���ĿƳɼ���\n");
	for(i=0;i<3;i++)
		for(pointer_1=*(array+i);pointer_1<array[i]+4;pointer_1++)
			scanf("%d",pointer_1);
	score(array,3);
	return 0;
	}
void score(int (*p1)[4],int n)//�������β�(*p1)[4]��Ϊһ��ָ�����4��Ԫ�ص�һά���飬��ֵΪһά�������ʼ��ַ
	{
	int i,j,k;
	for(i=0;i<n;i++)
		{
		for(j=0;j<4;j++)
			if(*(*(p1+i)+j)<60)
				{printf("%d ",*(*(p1+i)+j));k=0;}
		if(k==0)
			{k=1;
			printf(":Ϊ�������Ŀ�ɼ���");
			printf("ѧ�����Ϊ��%d\n",i);}
		}
	if(k!=1)
		printf("3λͬѧ���п�Ŀ���ϸ�!\n");
	}

