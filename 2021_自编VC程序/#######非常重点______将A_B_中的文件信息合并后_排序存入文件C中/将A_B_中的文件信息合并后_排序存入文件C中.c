#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MaxSize 100000
void File_sort(char *a)
	{
		int i,j,k=0,R;
		char min,temp;
		FILE *fp_C=fopen("C.txt","a");
		printf("�����������Ϊ:\n");
		puts(a);
		printf("����Ϊ��Ҫд�����������!\n");
		for(i=0;a[i]!='\0';i++)//ѡ������
			{
				min=a[i];
				R=i;
				for(j=i+1;a[j]!='\0';j++)
					if(min>a[j])
						{
							min=a[j];
							R=j;
						}
				if(min<a[i])
					{temp=a[i];a[i]=a[R];a[R]=temp;}
			}
		printf("������д�������Ϊ:\n");
		puts(a);
		if(fp_C!=NULL)
			printf("�ļ��򿪳ɹ�!\n");
		else
			{
				printf("�ļ���ʧ��!\n");
				exit(-1);
			}
		printf("����Ϊ�ļ�д������!\n");
		while(a[k++]!='\0')
			if(k<MaxSize)
				fputc(a[k],fp_C);
			else
				{
					printf("�±�Խ��!\n");
					break;
				}
		if(fclose(fp_C)==0)
			printf("�ļ��رճɹ�!\n");
		else
			printf("�ļ��ر�ʧ��!\n");
	}

void File_merge()
	{
		char ch[MaxSize];
		int i=0;
		FILE *fp_A,*fp_B;
		fp_A=fopen("A.txt","r");
		fp_B=fopen("B.txt","r");
		if(!fp_A && !fp_B)
			{
				printf("���ܴ��ļ�!\n");
				exit(-1);
			}
		else
			printf("�ļ��򿪳ɹ�!\n");
		printf("���ںϲ������ļ�������!\n");
		while(!feof(fp_A))
			if(i<MaxSize)
				ch[i++]=fgetc(fp_A);
			else
				{
					printf("�±�Խ��!\n");
					exit(-1);
				}
		while(!feof(fp_B))
			if(i<MaxSize)
				ch[i++]=fgetc(fp_B);
			else
				{
					printf("�±�Խ��!\n");
					exit(-1);
				}
		ch[i]='\0';
		if(fclose(fp_A)==0 && fclose(fp_B)==0)
			printf("�ļ��رճɹ�!\n");
		else
			printf("�ļ��ر�ʧ��!\n");

		File_sort(ch);
	}
int main()
	{
		File_merge();
		return 0;
	}