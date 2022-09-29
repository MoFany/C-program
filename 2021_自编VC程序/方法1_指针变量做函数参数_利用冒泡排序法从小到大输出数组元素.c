#include<stdio.h>
int main()
	{
	void sort(int *p);
	int array[10],*pointer_1,i;
	pointer_1=array;
	printf("请输入数组array的10个元素：");
	for(i=0;i<10;i++)
		scanf("%d",(array+i));
	printf("从小到大输出数组array元素为：");
	sort(pointer_1);
	for(pointer_1=array;pointer_1<array+10;pointer_1++)//输出指针变量pointer_1对应数组元素地址所指向的值
		printf("%2d",*pointer_1);
	printf("\n");
	return 0;
	}
void sort(int *p)
	{
	int i,*j,temp;
	for(i=0;i<9;i++)//冒泡排序法
		for(j=p;j<(p+9-i);j++)//置指针变量j每次进入内循环的初始值为：j=p=&array[0]
			if(*j>*(j+1))
			{temp=*j;*j=*(j+1);*(j+1)=temp;}
	}