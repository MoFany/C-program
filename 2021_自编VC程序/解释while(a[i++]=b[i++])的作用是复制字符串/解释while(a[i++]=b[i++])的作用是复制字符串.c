#include<stdio.h>

int main()
	{
	char *t="Hello Word!",b[20],*s=b;
	printf("t values:%s\n",t);
	printf("--------------------\n");

	while(*s++=*t++);		//--------------------------�ȼ���while((*s++=*t++)!='\0');<==>while((*s++=*t++)!=0);<==>while(*s);---��*sΪ0ʱ����ѭ��

	s=b;//һ���ǵ���ָ�������ͷ��ʼ*/

	printf("s values:%s\n",s);
	printf("b values:%s\n",b);
	return 0;
	}
/*int main()
	{
	char a[]="Hello Word!",*t=a,b[20],*s=b;

	while(*s++=*t++);		//--------------------------�ȼ���while((*s++=*t++)!='\0');<==>while((*s++=*t++)!=0);<==>while(*s);---��*sΪ0ʱ����ѭ��
	
	s=b;//һ���ǵ���ָ�������ͷ��ʼ
	printf("s values:%s\n",s);
	printf("b values:%s\n",b);
	return 0;
	}*/

