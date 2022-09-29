#include<stdio.h>
int main()
	{
	void copy_string(char *a,char *b);
	char a[100],b[]="ok!",*pointer_1,*pointer_2;
	pointer_1=a;
	pointer_2=b;
	printf("请输入字符串a：");
	gets(pointer_1);
	printf("字符串b的原值为：%s\n",b);
	copy_string(pointer_1,pointer_2);
//	printf("输出字符串b为：%s\n",b);
	return 0;
	}
void copy_string(char *a,char *b)
	{
	char *p=b;//将b指向的数组首元素的地址赋值给指针变量p
	printf("将字符串a复制给字符串b!\n");
	for(;*a!='\0';a++,b++)
		*b=*a;
	*b='\0';
	b=p;
	printf("输出字符串b为：%s\n",b);
	}
