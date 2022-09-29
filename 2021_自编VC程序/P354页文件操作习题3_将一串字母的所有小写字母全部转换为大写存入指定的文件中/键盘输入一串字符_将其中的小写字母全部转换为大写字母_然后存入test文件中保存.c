#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MaxSize 100
void SwitchStr(char *str)
	{
		int i;
		for(i=0;str[i]!='\0';i++)
				if(str[i]>='a' && str[i]<='z')
					str[i]=str[i]-32;
	}

void File_str(char *str)
	{
		int i=0;
		FILE *fp=fopen("text.txt","a");
		if(fp==NULL)
			{
				printf("fp指针指向文件出错!\n");
				exit(-1);
			}
		while(str[i]!='\0' && str[i]!='!')
			{
				fputc(str[i],fp);
				i++;
			}
		if(fclose(fp)==0)
			printf("成功关闭文件!\n");
		else
			printf("文件关闭失败!\n");
	}

int main()
	{
		char array[MaxSize];
		printf("请输入一句英文:");
		gets(array);
		printf("将字符串中的所有小写字母转为大写输出:\n");
		SwitchStr(array);
		puts(array);
		printf("将该字符串存入指定文件!\n");
		File_str(array);
		return 0;
	}
