#include<stdio.h>
int main()
	{
	char str[1000],array[1000];
	int i,j=0,k=0;
	printf("Please enter a string:");//��gets�ַ������뺯����ִ�м����ַ�������
	gets(str);

	printf("String output sequentially:");//��˳������ַ���
	for(i=0;str[i]!='\0';i++)
		{printf("%c",str[i]);k++;}

	printf("\nOut string in reverse:");//����������ַ���
	for(i=k-1;i>=0;i--)
		array[j++]=str[i];//��ԭ�ַ���������������ַ�����֮��
	array[j]='\0';		  //���ַ�����ĩβһλ����'\0'��������Ҫ��Ȼ��������룡
	printf("%s\n",array);//������ַ����ķ�ʽ'%s'��������ַ�����
	return 0;
	}
