#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MaxSize 100
void SwitchStr(char *str)
	{
		int i,num=0,word=0;
		for(i=0;str[i]!='\0';i++)
			if(str[i]=='\040')//�ո�Ϊ0
				word=0;
			else
				if(word==0)
					{
						word=1;//����Ϊ1
						num++;//num����ͳ�Ƴ��ֵĵ�������
						if(str[i]>='a' && str[i]<='z')
							str[i]=str[i]-32;
					}
	}

void File_str(char *str)
	{
		FILE *fp=fopen("Englishtext.txt","a");
		if(fp==NULL)
			{
				printf("fpָ��ָ���ļ�����!\n");
				exit(1);
			}
		if(fputs(str,fp)==0)
			printf("�ɹ������ݴ����ļ�Englishtext.txt!\n");
		else
			printf("����ʧ�ܳ����쳣!\n");
		fclose(fp);
	}

int main()
	{
		char array[MaxSize];
		printf("������һ��Ӣ��:");
		gets(array);
		printf("��ÿ�����ʵ�����ĸתΪ��д���:\n");
		SwitchStr(array);
		puts(array);
		printf("�����ַ�������ָ���ļ�!\n");
		File_str(array);
		return 0;
	}
