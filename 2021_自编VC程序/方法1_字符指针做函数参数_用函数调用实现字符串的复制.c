#include<stdio.h>
int main()
	{
	void copy_string(char *a,char *b);
	char a[100],b[]="ok!",*pointer_1,*pointer_2;
	pointer_1=a;
	pointer_2=b;
	printf("�������ַ���a��");
	gets(pointer_1);
	printf("�ַ���b��ԭֵΪ��%s\n",b);
	copy_string(pointer_1,pointer_2);
//	printf("����ַ���bΪ��%s\n",b);
	return 0;
	}
void copy_string(char *a,char *b)
	{
	char *p=b;//��bָ���������Ԫ�صĵ�ַ��ֵ��ָ�����p
	printf("���ַ���a���Ƹ��ַ���b!\n");
	for(;*a!='\0';a++,b++)
		*b=*a;
	*b='\0';
	b=p;
	printf("����ַ���bΪ��%s\n",b);
	}
