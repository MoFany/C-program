#include<stdio.h>
int main()
	{
	int a[10],*pointer_1,i;
	pointer_1=a;
	printf("���������������10��Ԫ�أ�");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));//�ȼ��ڣ�scanf("%d",&a[i]);
	printf("����ָ���������������ÿ��Ԫ��Ϊ��");
	for(i=0;i<10;i++)
		printf("%2d",*(pointer_1+i));//�ȼ��ڣ�printf("%2d",*(a+i));---�ȼ��ڣ�printf("%2d",a[i]);---�ȼ��ڣ�printf("%2d",*(pointer_1++));
	printf("\n");
	return 0;
	}
