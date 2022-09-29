#include<stdio.h>
#include<string.h>
char *max_str(char** p)
{
	int i;
	char*max=*p;
	for (i=0;i<4;i++,p++)//-----使用这一种最终p指向了str[4]越界了,所以不建议使用这一种p++的方式而建议使用p+i的方式将p做假常量看待
		if(strcmp(*p,max)>0)//---等价于if(strcmp(*(p+i),max)>0)
			max=*p;//------------等价于max=*(p+i)
	return max;
}
/*指针使用方式二,只改变指针变量偏移量而不改变其指向
方法1.----------------
char *max_str(char** p)
{
	int i;
	char*max=*p;
	for (i=0;i<4;i++)
		if(strcmp(*(p+i),max)>0)
			max=*(p+i);
	printf("%s\n",max);
	return max;
}
方法2.----------------
char* max_str(char** p)
{
	int i;
	char *max=*p;
	for(i=0;i<4;i++)
	{
		if(strcmp(p[i],max)>0)
			max=p[i];
	}
	return max;
}
*/
int main()
{
	char *str[] = { "hello world","are you ok","fucking you","see you next time" };
	printf("输出这些字符串中的最大的字符串!\n");
	printf("最大字符串为:%s\n", max_str(str));
	return 0;
}