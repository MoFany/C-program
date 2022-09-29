#include<stdio.h>
//#include<string.h>
int main()
{
	
	char string[1000];
	int i,num=0,word=0;
	char c;
	printf("用英文输入一句话！\n");
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
		if(c==' ') word=0;
		else 
			if(word==0)
				{
				word=1;
				num++;
				}
	printf("该句子里有%d个单词。\n",num);
return 0;
}