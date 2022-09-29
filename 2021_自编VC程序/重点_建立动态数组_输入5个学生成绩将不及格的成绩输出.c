#include<stdio.h>
#include<stdlib.h>
int main()
	{
	void check(int *);//函数声明，形参为指向int数据的指针变量
	int *p1,i;
	p1=(int *)malloc(5 *sizeof(int));//开辟动态内存区(动态存储区)
	for(i=0;i<5;i++)
		scanf("%d",p1+i);//按地址赋值给动态数组
	check(p1);//函数调用
	return 0;
	}
void check(int *p)//定义被调函数，形参为指向int数据的指针变量
	{
	int i;
	printf("They are fail:");
	for(i=0;i<5;i++)
		if (p[i]<60)
			printf("%d ",p[i]);//按数组下标法从0输出数组元素中小于60的元素值
	printf("\n");
	}
