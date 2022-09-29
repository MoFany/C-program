#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
int main()
	{
		FILE *fp_in,*fp_out;
		char ch;
		fp_in=fopen("C:/Users/jiang/Desktop/专升本复习资料/蒋明辉自编VC程序/###重点_对文件的读和写/file1.txt","r");
		fp_out=fopen("C:/Users/jiang/Desktop/专升本复习资料/蒋明辉自编VC程序/###重点_对文件的读和写/file2.txt","a");
		if(!fp_in || !fp_out)
			{
				printf("can't open this file!\n");
				exit(0);
			}

		while(!feof(fp_in))//条件等价于:(!feof(fp_in)!=0)==>feof()函数的返回值非0(!feof(fp)==0)说明位置指针指向文件末尾，当没有指向文件末尾时返回0
			{
				ch=fgetc(fp_in);
				fputc(ch,fp_out);
				putchar(ch);
			}
		//fputc('\n',fp_out);
		putchar(10);//输出换行
		printf("向文件复制数据成功!!!--------->The End...\n");
		fclose(fp_in);
		fclose(fp_out);
		return 0;
	}