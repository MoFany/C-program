#include<stdio.h>
int main()
	{
	char str[1000],array[1000];
	int i,j=0,k=0;
	printf("Please enter a string:");//用gets字符串输入函数，执行键入字符串操作
	gets(str);

	printf("String output sequentially:");//按顺序输出字符串
	for(i=0;str[i]!='\0';i++)
		{printf("%c",str[i]);k++;}

	printf("\nOut string in reverse:");//按反序输出字符串
	for(i=k-1;i>=0;i--)
		array[j++]=str[i];//将原字符串按反序存入新字符数组之中
	array[j]='\0';		  //新字符数组末尾一位加入'\0'结束符，要不然会出现乱码！
	printf("%s\n",array);//以输出字符串的方式'%s'，输出新字符数组
	return 0;
	}
