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
				printf("Ҫ���ӵ����ַ����ռ䲻��!\n");
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
		puts("����������str1������:");
		gets(str1);
		puts("����������str2������:");
		gets(str2);
		puts("������str2�Ĳ����������ӵ�str1!");
		str_cat(str1,str2);
		printf("����str1����������Ϊ:");
		puts(str1);
		printf("����str2������Ϊ:%s\n",str2);
		return 0;
//ע����scanf()�����й���%sʹ��ʱ��ע������:ֻ����������,�����ÿո����ַ���֮��ķָ���,��Ϊ%s��scanf()������Ĭ���Կո���Ϊ���������־
	}