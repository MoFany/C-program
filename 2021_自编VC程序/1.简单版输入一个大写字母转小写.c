#include<stdio.h>
void main()
{ char c=getchar();
if(c>=65 && c<=90)
	printf("%c\n",c+32);
else
	printf("这不是一个大写字母!\n");
}