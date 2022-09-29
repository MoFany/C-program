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
void sort(char *name[],int n)//形参:char *name[]为指向字符型数据的指针数组
	{
	char *temp;
	int i,j;
	for(i=0;i<n-1;i++)//冒泡选择法排序
		for(j=0;j<n-i-1;j++)
			if(strcmp(name[j],name[j+1])>0)//依然是前者与后者比较返回值为正数则:name[j]>name[j+1]成立
				{temp=name[j];name[j]=name[j+1];name[j+1]=temp;}//改变指针数组每个元素指向的字符串首地址
	}
void print(char *name[],int n)//形参:char *name[]为指向字符型数据的指针数组
	{
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);//按指针数组元素的顺序输出他们所指向改变后的字符串
	}