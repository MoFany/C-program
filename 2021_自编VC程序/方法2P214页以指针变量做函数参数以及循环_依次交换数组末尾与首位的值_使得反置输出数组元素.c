#include<stdio.h>
int main()
	{
	void pointer_reverse(int *p,int n);
	int array[10],*pointer_1,i;
	pointer_1=array;
	printf("请输入整型数组array的10个元素：");
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);
	printf("输出暂时未反置的array数组元素：");
	for(i=0;i<10;i++)
		printf("%2d",array[i]);
	printf("\narray数组元素反序输出为：");
	pointer_reverse(pointer_1,10);//以指针变量作为函数调用的实参
	for(i=0;i<10;i++)
		printf("%2d",array[i]);
	printf("\n");
	return 0;
	}
void pointer_reverse(int *p,int n)//形参*p相当于指针常量
	{
	int *p1,*i,*j,m=(n-1)/2,temp;//m=4:0~4，五个数。
	i=p;//i的当前指向和指针变量p一样*p=&a[0];
	j=p+n-1;//等价于：j=(a+9);--j=(a+n-1);
	p1=p+m;//等价于：p1=(a+4);--p1=(a+m);
	for(;i<=p1;i++,j--)
		{temp=*i;*i=*j;*j=temp;}//借助第三方变量将数组元素的最后一个元素与第一个元素交换。
	}
