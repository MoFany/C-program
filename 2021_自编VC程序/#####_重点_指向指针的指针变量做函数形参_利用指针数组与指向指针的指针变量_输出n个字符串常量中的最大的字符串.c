#include<stdio.h>
#include<string.h>
char *max_str(char** p)
{
	int i;
	char*max=*p;
	for (i=0;i<4;i++,p++)//-----ʹ����һ������pָ����str[4]Խ����,���Բ�����ʹ����һ��p++�ķ�ʽ������ʹ��p+i�ķ�ʽ��p���ٳ�������
		if(strcmp(*p,max)>0)//---�ȼ���if(strcmp(*(p+i),max)>0)
			max=*p;//------------�ȼ���max=*(p+i)
	return max;
}
/*ָ��ʹ�÷�ʽ��,ֻ�ı�ָ�����ƫ���������ı���ָ��
����1.----------------
char *max_str(char** p)
{
	int i;
	char*max=*p;
	for (i=0;i<4;i++)
		if(strcmp(*(p+i),max)>0)
			max=*(p+i);
	printf("%s\n",max);
	return max;
}
����2.----------------
char* max_str(char** p)
{
	int i;
	char *max=*p;
	for(i=0;i<4;i++)
	{
		if(strcmp(p[i],max)>0)
			max=p[i];
	}
	return max;
}
*/
int main()
{
	char *str[] = { "hello world","are you ok","fucking you","see you next time" };
	printf("�����Щ�ַ����е������ַ���!\n");
	printf("����ַ���Ϊ:%s\n", max_str(str));
	return 0;
}