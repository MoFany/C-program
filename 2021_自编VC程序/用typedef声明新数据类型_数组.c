#include<stdio.h>
int main()
{
	typedef int count;
	count a[10],i;
	printf("����������������count�������������a�ĸ���Ԫ��ֵ��");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));
	printf("�����");
	for(i=0;i<10;i++)
		printf("%d\n",*(a+i));//pintf("%d",a[i]);
return 0;
}