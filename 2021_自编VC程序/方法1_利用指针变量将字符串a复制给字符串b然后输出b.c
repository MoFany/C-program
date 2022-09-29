#include<stdio.h>
int main()
	{
	char *string_1,*string_2,a[100],b[100];//输入字符串不能超过数组范围!
	string_1=a;
	string_2=b;
	printf("输入字符串a：");
	gets(string_1);
	printf("将字符串a复制给字符串b!\n");
	for(;string_1<(a+100);string_1++)
		*(string_2++)=*string_1;
	printf("输出字符串b为：%s\n",string_2);
	return 0;
	}
