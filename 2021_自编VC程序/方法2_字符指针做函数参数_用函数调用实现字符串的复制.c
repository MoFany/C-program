#include<stdio.h>
int main()
	{
	void copy_string(char *p_string);
	char a[100];//�����ַ������ܳ������鷶Χ
	printf("�����ַ���a��");
	gets(a);	
	copy_string(a);
	return 0;
	}
 void copy_string(char *p_string)
	{	 
	 char b[100];
	 int j=0;
	 printf("���ַ���a���Ƹ��ַ���b!\n");
	 for(;*p_string!='\0';p_string++)
		 b[j++]=*p_string;
	 b[j]='\0';
	printf("����ַ���bΪ��%s\n",b);
	 }