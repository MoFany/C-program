#include<stdio.h>
int main()
	{
	void pointer_reverse(int *p);
	int array[10],*pointer_1,i;
	pointer_1=array;
	printf("请输入整型数组array的10个元素：");
	for(i=0;i<10;i++)
		scanf("%d",pointer_1++);//最后指针变量所指向的元素为pointer=&a[10];按反序执行--p并存储。
	printf("输出暂时未反置的array数组元素：");
	for(i=0;i<10;i++)
		printf("%2d",array[i]);
	pointer_reverse(pointer_1);
	printf("\narray数组元素反序输出为：");
	for(i=0;i<10;i++)
		printf("%2d",*(array+i));
	printf("\n");
	return 0;
	}
void pointer_reverse(int *p)
{
	int i,a[10],j=0;
	for(i=9;i>=0;i--)
		a[j++]=*--p;//通过一个第三方数组来存储每次*p--逆序后的地址所指向变量的值
	for(i=0;i<10;i++)
		*(p++)=a[i];//将第三方数组中的值按顺序赋值于*(p++)，从而改变原数组array中的每个元素
}
