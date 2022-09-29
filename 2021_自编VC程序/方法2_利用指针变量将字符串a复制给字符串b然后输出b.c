#include<stdio.h>
int main()
	{
	char a[100],b[100],*pointer_1,j=0;
	pointer_1=a;
	printf("请输入一个字符串：");
	gets(pointer_1);
	printf("将字符串a复制给字符串b!\n");
	for(;pointer_1<a+100;pointer_1++)
		b[j++]=*pointer_1;
	printf("输出字符串b为：%s\n",b);
	return 0;
	}
