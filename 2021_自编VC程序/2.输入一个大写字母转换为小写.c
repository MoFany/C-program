#include"stdio.h"
void main()
{
char c;
printf("请输入一个大写字母：");
scanf("%c",&c);
if(c>=65 && c<=90)
	{printf("大写字母转换小写字母!\n");
	printf("原字母为：%c\n相应小写字母为：%c\n",c,c+32);}
else
	printf("输入错误!\n");

}