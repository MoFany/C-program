#include<stdio.h>
int main()
	{
	char a[100],b[100],*pointer_1,j=0;
	pointer_1=a;
	printf("������һ���ַ�����");
	gets(pointer_1);
	printf("���ַ���a���Ƹ��ַ���b!\n");
	for(;pointer_1<a+100;pointer_1++)
		b[j++]=*pointer_1;
	printf("����ַ���bΪ��%s\n",b);
	return 0;
	}
