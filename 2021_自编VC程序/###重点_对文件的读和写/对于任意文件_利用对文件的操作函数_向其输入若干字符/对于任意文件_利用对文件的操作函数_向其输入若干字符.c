#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
	{
		FILE *fp;
		char ch,filename[999];
		printf("�������ļ���ʶ(�ļ�·��\\�ļ�������.�ļ���׺):");
		gets(filename);
		if((fp=fopen(filename,"a"))==NULL)//�����filename��ʾ����������׵�ַ������û�м�˫����
			{
				printf("can't open this file!\n");
				exit (0);//�ر������ļ�����ֹ����ִ�еĳ��򣬴��û��Ŵ��޸ĺ���������
			}

		printf("������һ��׼���洢�����̵��ַ�(��#����):");
		ch=getchar();

		while(ch!='#')
			{
				fputc(ch,fp);
				putchar(ch);
				ch=getchar();
			}
		fclose(fp);
		putchar(10);//���е�ASCIIֵΪ10
		return 0;
	}