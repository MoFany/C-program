#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
int main()
	{
		FILE *fp_in,*fp_out;
		char ch;
		fp_in=fopen("C:/Users/jiang/Desktop/ר������ϰ����/�������Ա�VC����/###�ص�_���ļ��Ķ���д/file1.txt","r");
		fp_out=fopen("C:/Users/jiang/Desktop/ר������ϰ����/�������Ա�VC����/###�ص�_���ļ��Ķ���д/file2.txt","a");
		if(!fp_in || !fp_out)
			{
				printf("can't open this file!\n");
				exit(0);
			}

		while(!feof(fp_in))//�����ȼ���:(!feof(fp_in)!=0)==>feof()�����ķ���ֵ��0(!feof(fp)==0)˵��λ��ָ��ָ���ļ�ĩβ����û��ָ���ļ�ĩβʱ����0
			{
				ch=fgetc(fp_in);
				fputc(ch,fp_out);
				putchar(ch);
			}
		//fputc('\n',fp_out);
		putchar(10);//�������
		printf("���ļ��������ݳɹ�!!!--------->The End...\n");
		fclose(fp_in);
		fclose(fp_out);
		return 0;
	}