#include<stdio.h>
int main()
	{
	char *string_1,*string_2,a[100],b[100];//�����ַ������ܳ������鷶Χ!
	string_1=a;
	string_2=b;
	printf("�����ַ���a��");
	gets(string_1);
	printf("���ַ���a���Ƹ��ַ���b!\n");
	for(;string_1<(a+100);string_1++)
		*(string_2++)=*string_1;
	printf("����ַ���bΪ��%s\n",string_2);
	return 0;
	}
