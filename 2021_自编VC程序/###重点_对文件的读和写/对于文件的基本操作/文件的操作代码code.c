#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
	{
		FILE *fp;
		char str[999];
		printf("������һ���ַ���:");
		gets(str);//��ȡһ���ַ���
		if((fp=fopen("C:/Users/jiang/Desktop/ר������ϰ����/�������Ա�VC����/###�ص�_���ļ��Ķ���д/file2.txt","a"))==NULL)
			
			//�ļ�ָ�����fpָ����file.txt,��ʱfpָ������ļ�file3.txt���ڴ��е��ļ���Ϣ���Ŀ�ͷ,Ҳ�����ļ���Ϣ�����׵�ַ

			//fopen���������ļ��ɹ�ʱ��fp���ص�ֵ����ָ����ļ���ָ��,�����ļ���Ϣ������ʼ��ַ;���򷵻�ֵΪ:NULL

			{
				printf("can't open this file!\n");
				exit (0);
			}

		fputc('\n',fp);//��file3.txt�ļ��ж���һ�����з���ͬʱ����:ת���ַ�'\n'��txt�ļ���Ҳ��������
		fputs(str,fp);//���ַ�����str�е��ַ������׵�ַд�����ڴ����ļ����������൱�ڰ��ַ���д���ļ�ָ�����fp��ָ����ļ���
		puts(str);//���ַ����ķ�ʽ������str���
		fclose(fp);
		putchar(10);
		return 0;
	}