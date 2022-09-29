#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
	{
		FILE *fp;
		char str[999];
		printf("请输入一个字符串:");
		gets(str);//获取一个字符串
		if((fp=fopen("C:/Users/jiang/Desktop/专升本复习资料/蒋明辉自编VC程序/###重点_对文件的读和写/file2.txt","a"))==NULL)
			
			//文件指针变量fp指向了file.txt,此时fp指向的是文件file3.txt在内存中的文件信息区的开头,也就是文件信息区的首地址

			//fopen函数当打开文件成功时向fp返回的值是其指向的文件的指针,即该文件信息区的起始地址;否则返回值为:NULL

			{
				printf("can't open this file!\n");
				exit (0);
			}

		fputc('\n',fp);//向file3.txt文件中读入一个换行符，同时发现:转义字符'\n'在txt文件中也起换行作用
		fputs(str,fp);//将字符数组str中的字符串的首地址写入了内存中文件缓冲区，相当于把字符串写入文件指针变量fp所指向的文件中
		puts(str);//以字符串的方式将数组str输出
		fclose(fp);
		putchar(10);
		return 0;
	}