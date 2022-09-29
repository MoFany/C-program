#include<stdio.h>
int main()
	{
	void copy_string(char *p_string);
	char a[100];//输入字符串不能超过数组范围
	printf("输入字符串a：");
	gets(a);	
	copy_string(a);
	return 0;
	}
 void copy_string(char *p_string)
	{	 
	 char b[100];
	 int j=0;
	 printf("将字符串a复制给字符串b!\n");
	 for(;*p_string!='\0';p_string++)
		 b[j++]=*p_string;
	 b[j]='\0';
	printf("输出字符串b为：%s\n",b);
	 }