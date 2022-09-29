#include<stdio.h>
int main()
	{
	void sort(int array[]);
	int a[10],i,*pointer_1;
	pointer_1=a;
	printf("请输入数组array的10个元素：");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));
	printf("从小到大输出数组array元素为：");
  	sort(pointer_1);
	for(pointer_1=a;pointer_1<a+10;pointer_1++)//输出指针变量pointer_1对应数组元素地址所指向的值
		printf("%2d",*pointer_1);
	printf("\n");
	return 0;
	}
void sort(int array[])
	{
	int i,j,temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(array[j]>array[j+1])
				{temp=array[j];array[j]=array[j+1];array[j+1]=temp;}
	}