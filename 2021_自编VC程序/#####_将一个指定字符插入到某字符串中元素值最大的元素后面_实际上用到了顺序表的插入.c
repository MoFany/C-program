#include<stdio.h>
#include<string.h>
#define MaxSize 100
void str_insert(char *str,char element)
	{
		int i,j,max,temp1,temp2;
		max=str[0];
		for(i=j=0;str[i]!='\0';i++)
			if(max<str[i])
				{
					j=i;
					max=str[i];
				}
		temp2=element;
		for(i=j+1;temp2!='\0';i++)
			{
				temp1=str[i];
				str[i]=temp2;
				temp2=temp1;
			}
		str[i]='\0';//���һ��temp2�е�ֵ��һ��'\0'�ַ���������־
	}
int main()
	{
		char str[MaxSize],elem;
		printf("������һ���ַ���:");
		gets(str);
		printf("str�ַ����ĳ�ʼֵΪ:");
		puts(str);
		printf("������һ��Ҫ������ַ�Ԫ��(element):");
		elem=getchar();
		printf("��%c�ַ����뵽str�ַ��������Ԫ�صĺ���!\n");
		str_insert(str,elem);
		printf("����str�ַ�����ֵΪ:");
		puts(str);
		return 0;
	}