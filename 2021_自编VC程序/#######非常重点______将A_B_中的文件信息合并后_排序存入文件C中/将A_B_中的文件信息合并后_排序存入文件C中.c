#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MaxSize 100000
void File_sort(char *a)
	{
		int i,j,k=0,R;
		char min,temp;
		FILE *fp_C=fopen("C.txt","a");
		printf("待排序的内容为:\n");
		puts(a);
		printf("正在为将要写入的内容排序!\n");
		for(i=0;a[i]!='\0';i++)//选择排序
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
		printf("排序后待写入的内容为:\n");
		puts(a);
		if(fp_C!=NULL)
			printf("文件打开成功!\n");
		else
			{
				printf("文件打开失败!\n");
				exit(-1);
			}
		printf("正在为文件写入内容!\n");
		while(a[k++]!='\0')
			if(k<MaxSize)
				fputc(a[k],fp_C);
			else
				{
					printf("下标越界!\n");
					break;
				}
		if(fclose(fp_C)==0)
			printf("文件关闭成功!\n");
		else
			printf("文件关闭失败!\n");
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
				printf("不能打开文件!\n");
				exit(-1);
			}
		else
			printf("文件打开成功!\n");
		printf("正在合并两个文件的内容!\n");
		while(!feof(fp_A))
			if(i<MaxSize)
				ch[i++]=fgetc(fp_A);
			else
				{
					printf("下标越界!\n");
					exit(-1);
				}
		while(!feof(fp_B))
			if(i<MaxSize)
				ch[i++]=fgetc(fp_B);
			else
				{
					printf("下标越界!\n");
					exit(-1);
				}
		ch[i]='\0';
		if(fclose(fp_A)==0 && fclose(fp_B)==0)
			printf("文件关闭成功!\n");
		else
			printf("文件关闭失败!\n");

		File_sort(ch);
	}
int main()
	{
		File_merge();
		return 0;
	}