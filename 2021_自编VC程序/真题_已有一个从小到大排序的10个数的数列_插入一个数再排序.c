#include<stdio.h>
int main()
	{
	int a[]={1,2,3,4,5,6,7,8,9,10},c,i,j,temp,b[11];
	printf("���c����������ֵ:");
	scanf("%d",&c);
	for(i=0;i<11;i++)
	{	
		if(i==0)
			b[0]=c;
		else
			b[i]=a[i-1];
	}
	printf("�ϲ���δ���������!\n");
	for(i=0;i<11;i++)
		printf("%5d",b[i]);
	for(i=0;i<10;i++)
		for(j=0;j<10-i;j++)
			if(b[j]>b[j+1])
				{temp=b[j+1];b[j+1]=b[j];b[j]=temp;}//ð������
	printf("\nc�������в��������������!\n");
	for(i=0;i<11;i++)
		printf("%5d",b[i]);
	printf("\n");
	return 0;
	}
