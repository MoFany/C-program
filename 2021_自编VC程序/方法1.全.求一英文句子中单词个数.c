#include<stdio.h>
//#include<string.h>
int main()
{
	
	char string[1000];
	int i,num=0,word=0;
	char c;
	printf("��Ӣ������һ�仰��\n");
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
		if(c==' ') word=0;
		else 
			if(word==0)
				{
				word=1;
				num++;
				}
	printf("�þ�������%d�����ʡ�\n",num);
return 0;
}