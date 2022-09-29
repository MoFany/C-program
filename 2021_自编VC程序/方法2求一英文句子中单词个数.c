#include<stdio.h>
//#include<string.h>
int main()
{
	int i,num=0;
	char c[10000];
	printf("请输入一行英文句子！\n");
	gets(c);
	for(i=0;i<10000;i++)
	if(c[i]!=' ')
		if(c[i+1]!=' ') continue;
	else
		if(c[i]!=' ' && c[i+1]==' ')
			num+=1;
			
		if(c[i]!=' ' && c[i+1]=='\0')
			num+=1;
	
	printf("该句子有%d个单词！\n",num);
return 0;
}