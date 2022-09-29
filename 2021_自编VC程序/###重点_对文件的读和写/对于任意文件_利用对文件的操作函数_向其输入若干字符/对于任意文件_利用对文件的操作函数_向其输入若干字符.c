#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
	{
		FILE *fp;
		char ch,filename[999];
		printf("请输入文件标识(文件路径\\文件名主干.文件后缀):");
		gets(filename);
		if((fp=fopen(filename,"a"))==NULL)//这里的filename表示的是数组的首地址，所以没有加双引号
			{
				printf("can't open this file!\n");
				exit (0);//关闭所有文件，终止正在执行的程序，待用户排错修改后重新运行
			}

		printf("请输入一个准备存储到磁盘的字符(以#结束):");
		ch=getchar();

		while(ch!='#')
			{
				fputc(ch,fp);
				putchar(ch);
				ch=getchar();
			}
		fclose(fp);
		putchar(10);//换行的ASCII值为10
		return 0;
	}