#include<stdio.h>
int main()
	{
	int sum=0,s=0,i,j;
	int a[5][5];
	printf("����5*5�����ֵ!\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",*(a+i)+j);//��ַ�������ά�����Ԫ��ֵ
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(i==j)
				sum=sum+a[i][j];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			{
			if(i==j) 
					;
				else
					if(i+j==4)
						s=s+a[i][j];
			}
	printf("5*5����Խ���֮��Ϊ:%d\n",s+sum);
	return 0;
	}

