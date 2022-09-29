#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

void File_str(char *str)
	{
		FILE *fp=fopen("Englishtext.txt","a");
		if(fp==NULL)
			{
				printf("fp指针指向文件出错!\n");
				exit(1);
			}
		if(fputs(str,fp)==0)
			printf("成功将数据存入文件Englishtext.txt!\n");
		else
			printf("存入失败出现异常!\n");
		fclose(fp);
	}

int main()
	{
		char array[MaxSize];
		printf("请输入一句英文:");
		gets(array);
		printf("将每个单词的首字母转为大写输出:\n");
		SwitchStr(array);
		puts(array);
		printf("将该字符串存入指定文件!\n");
		File_str(array);
		return 0;
	}
