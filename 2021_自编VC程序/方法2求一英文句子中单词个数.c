#include<stdio.h>
//#include<string.h>
int main()
{
	int i,num=0;
	char c[10000];
	printf("������һ��Ӣ�ľ��ӣ�\n");
	gets(c);
	for(i=0;i<10000;i++)
	if(c[i]!=' ')
		if(c[i+1]!=' ') continue;
	else
		if(c[i]!=' ' && c[i+1]==' ')
			num+=1;
			
		if(c[i]!=' ' && c[i+1]=='\0')
			num+=1;
	
	printf("�þ�����%d�����ʣ�\n",num);
return 0;
}