#include<stdio.h>
int main()
	{
	int *score(int x,int (*p)[4]);
	int array[3][4],i,num;
	int *pointer_1,*pointer_2;
	printf("请输入3位同学四科的成绩：");
	for(i=0;i<3;i++)
		for(pointer_1=*(array+i);pointer_1<array[i]+4;pointer_1++)
			scanf("%d",pointer_1);
	printf("请输入一位同学的序号：");
	scanf("%d",&num);
	if(num==0 || num==1 || num==2)
		{
		pointer_2=score(num,array);//将返回值：地址赋给指针变量pointer_2做值
		printf("序号为%d的同学四科成绩为：",num);
		for(i=0;i<4;i++)
			printf("%d ",*(pointer_2+i));//将pointer_2中地址单元所指向的值输出
		printf("\n");
		}
	else
		printf("对不起!没有该位同学!\n");
	return 0;
	}
int *score(int x,int(*p)[4])//定义一个返回值为指针的函数
	{
	return(*(p+x));
	}

