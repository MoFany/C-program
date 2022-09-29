#include<stdio.h>

int main()
	{
	char *t="Hello Word!",b[20],*s=b;
	printf("t values:%s\n",t);
	printf("--------------------\n");

	while(*s++=*t++);		//--------------------------等价于while((*s++=*t++)!='\0');<==>while((*s++=*t++)!=0);<==>while(*s);---当*s为0时跳出循环

	s=b;//一定记得让指针变量从头开始*/

	printf("s values:%s\n",s);
	printf("b values:%s\n",b);
	return 0;
	}
/*int main()
	{
	char a[]="Hello Word!",*t=a,b[20],*s=b;

	while(*s++=*t++);		//--------------------------等价于while((*s++=*t++)!='\0');<==>while((*s++=*t++)!=0);<==>while(*s);---当*s为0时跳出循环
	
	s=b;//一定记得让指针变量从头开始
	printf("s values:%s\n",s);
	printf("b values:%s\n",b);
	return 0;
	}*/

