#include<stdio.h>
int main()
{int a[10],i,j,k,n=10,m,temp;
printf("���������Ԫ��ֵ:");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);
printf("�������λ��M��ֵ:");
scanf("%d",&m);
printf("��������Ԫ��ֵ�Ľ�������!\n");
for(i=n-1;i>=n-m;i--)
	{k=i;
	for(j=n-m-1;j>=0;j--)
	{temp=a[j];a[j]=a[k];a[k]=temp;k=j;}}
printf("���������˳���������Ԫ�ص�ֵΪ:");
for(i=0;i<10;i++)
	printf("%d ",a[i]);
printf("\n");
return 0;
}