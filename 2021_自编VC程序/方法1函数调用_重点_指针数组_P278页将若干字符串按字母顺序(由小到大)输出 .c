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
void sort(char *name[],int n)
	{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)//ѡ�����򣬿���ָ�������ÿ��Ԫ��
		{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(name[k],name[j])>0)//��Ȼ��ǰ������߱ȴ�С�����⣡��ָ������Ԫ����ָ����ַ���name[k]>name[j]ʱִ�е�ַ����
				k=j;
		if(k!=i)//��k==jʱ����ָ���������ÿ��Ԫ�ص�ָ��ͬʱҲ˵��ָ������Ԫ����ָ����ַ���name[k]>name[j]
			{temp=name[i];name[i]=name[k];name[k]=temp;}
		}
	}
void print(char *name[],int n)
	{
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);//��ָ������Ԫ�ص�˳�����������ָ����ַ���
	}