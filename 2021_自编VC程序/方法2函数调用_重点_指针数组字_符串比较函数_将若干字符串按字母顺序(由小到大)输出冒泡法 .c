#include<stdio.h>
#include<string.h>
int main()
	{
	void sort(char *name[],int n);
	void print(char *name[],int n);
	char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};//����ָ�����飬����Ԫ�طֱ�ָ��5���ַ���
	int n=5;
	sort(name,n);
	print(name,n);
	return 0;
	}
void sort(char *name[],int n)//�β�:char *name[]Ϊָ���ַ������ݵ�ָ������
	{
	char *temp;
	int i,j;
	for(i=0;i<n-1;i++)//ð��ѡ������
		for(j=0;j<n-i-1;j++)
			if(strcmp(name[j],name[j+1])>0)//��Ȼ��ǰ������߱ȽϷ���ֵΪ������:name[j]>name[j+1]����
				{temp=name[j];name[j]=name[j+1];name[j+1]=temp;}//�ı�ָ������ÿ��Ԫ��ָ����ַ����׵�ַ
	}
void print(char *name[],int n)//�β�:char *name[]Ϊָ���ַ������ݵ�ָ������
	{
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);//��ָ������Ԫ�ص�˳�����������ָ��ı����ַ���
	}