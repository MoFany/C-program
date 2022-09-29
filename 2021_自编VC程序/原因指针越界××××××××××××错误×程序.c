#include<stdio.h>
#include<string.h>
char *max_str(char* *p)//指向指针的指针变量做函数形参,则p所指向的对象是一个指向char型数据的指针
{
	int i;
	char *max = *p;//*p代表地址,代表指针数组str[0],**p<==>*str[0]
	for (i=0;i<4;i++)
	{
		p += i;//每次使p的位置后移==>p=p+i


		//指针越界了导致指针指向的结果错误----第一次p=p+0;----第二次p=p+1;----第三次p=p+2;----第四次p=p+3;这样在每次的新址基础上往后移而不是原址基础上

		if (strcmp(*p, max) > 0)//字符串比较函数strcmp()逐个比较前一个字符串与后一个字符串对应位置上的ASCII码值
			max = *p;
	}
	return max;
}
int main()
{
	char *str[] = {"hello world","are you ok","fucking you","see you next time"};//定义一个char型指针数组,其中每个指针元素都指向一个字符串常量的首地址
	printf("输出这些字符串中的最大的字符串!\n");//可以理解为指针数组是n(n>1)个指针变量的集合体,指针数组里面封装了n个指向同种类型数据的指针变量
	printf("最大字符串为:%s\n",max_str(str));
	return 0;
}