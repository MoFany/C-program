#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 100
void str_cat(char *str1,char *str2)
	{
		int i,j;
		i=j=0;
		if(MaxSize-strlen(str1)<5)
			{
				printf("要连接到的字符串空间不够!\n");
				exit(-1);
			}
		while(str1[i]!='\0')
			i++;
		if(strlen(str2)<5)
			for( ;str2[j]!='\0';j++)
				str1[i++]=str2[j];
		else
			for( ;j<5;j++)
				str1[i++]=str2[j];
		str1[i]='\0';
	}
int main()
	{
		char str1[MaxSize],str2[MaxSize];
		puts("请输入数组str1的内容:");
		gets(str1);
		puts("请输入数组str2的内容:");
		gets(str2);
		puts("将数组str2的部分内容连接到str1!");
		str_cat(str1,str2);
		printf("数组str1的最新内容为:");
		puts(str1);
		printf("数组str2的内容为:%s\n",str2);
		return 0;
//注意在scanf()函数中关于%s使用时的注意事项:只能整体输入,不能用空格做字符串之间的分隔符,因为%s在scanf()函数中默认以空格作为输入结束标志
	}