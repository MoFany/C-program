#include<stdio.h>
int main()
	{
	int a[10],*pointer_1,i;
	pointer_1=a;
	printf("请输入整型数组的10个元素：");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));//等价于：scanf("%d",&a[i]);
	printf("利用指针变量输出该数组的每个元素为：");
	for(i=0;i<10;i++)
		printf("%2d",*(pointer_1+i));//等价于：printf("%2d",*(a+i));---等价于：printf("%2d",a[i]);---等价于：printf("%2d",*(pointer_1++));
	printf("\n");
	return 0;
	}
