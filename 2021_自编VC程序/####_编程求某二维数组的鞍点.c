#include<stdio.h>
int main()
{
	int a[3][4],i,j,k,col,max,min,top;
	printf("��ʼ����ά����,Ϊ��ά��������ֵ!\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",*(a+i)+j);
	printf("��ӡһ��!\n");
	for(i=0;i<3;i++)
	{
		for(j=0,top=0;j<4;j++,top++)
			printf("%d\t",*(*(a+i)+j));
		if(top%4==0)
			printf("\n");
	}
	printf("���ά����İ���!\n");

	for(i=0;i<3;i++)
	{
		max=a[i][0];
		for(j=0;j<4;j++)
			if(max<a[i][j])
			{
				max=a[i][j];
				col=j;
			}
		min=max;
		for(k=0;k<3;k++)
			if(min>a[k][col])
				min=a[k][col];
		if(min==max)
		{
			printf("������:%d\n",max);
			top=0;
		}
	}
	if(top!=0)
			printf("û�а���\n");;
	return 0;
}