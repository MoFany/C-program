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
				printf("fpָ��ָ���ļ�����!\n");
				exit(-1);
			}
		while(str[i]!='\0' && str[i]!='!')
			{
				fputc(str[i],fp);
				i++;
			}
		if(fclose(fp)==0)
			printf("�ɹ��ر��ļ�!\n");
		else
			printf("�ļ��ر�ʧ��!\n");
	}

int main()
	{
		char array[MaxSize];
		printf("������һ��Ӣ��:");
		gets(array);
		printf("���ַ����е�����Сд��ĸתΪ��д���:\n");
		SwitchStr(array);
		puts(array);
		printf("�����ַ�������ָ���ļ�!\n");
		File_str(array);
		return 0;
	}
