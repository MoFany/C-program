#include<stdio.h>
#include<string.h>
#define MaxSize 100
void SwitchStr(char *str)
	{
		int i,num=0,word=0;
		for(i=0;str[i]!='\0';i++)
			if(str[i]=='\040')//空格为0
				word=0;
			else
				if(word==0)
					{
						word=1;//单词为1
						num++;//num可以统计出现的单词数量
						if(str[i]>='a' && str[i]<='z')
							str[i]=str[i]-32;
					}
	}

int main()
	{
		char array[MaxSize];
		printf("请输入一句英文:");
		gets(array);
		printf("将每个单词的首字母转为大写输出:\n");
		SwitchStr(array);
		puts(array);
		return 0;
	}
