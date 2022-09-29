#include<stdio.h>
#include<string.h>
int main()
	{
	void sort(char *name[],int n);
	void print(char *name[],int n);
	char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};//定义指针数组，它的元素分别指向5个字符串
	int n=5;
	sort(name,n);
	print(name,n);
	return 0;
	}
void sort(char *name[],int n)
	{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)//选择法排序，控制指针数组的每个元素
		{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(name[k],name[j])>0)//依然是前者与后者比大小的问题！当指针数组元素所指向的字符串name[k]>name[j]时执行地址交换
				k=j;
		if(k!=i)//当k==j时交换指针数组关于每个元素的指向，同时也说明指针数组元素所指向的字符串name[k]>name[j]
			{temp=name[i];name[i]=name[k];name[k]=temp;}
		}
	}
void print(char *name[],int n)
	{
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);//按指针数组元素的顺序输出它们所指向的字符串
	}