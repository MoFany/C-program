#include<stdio.h>
int main()
	{
	void pointer_swap(int *p1,int *p2);
	int a,b,c;
	int *pointer_1,*pointer_2,*pointer_3;
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	printf("请乱序输入三个正整数：");
	scanf("%d%d%d",pointer_1,pointer_2,pointer_3);
	if(*pointer_1<*pointer_2) pointer_swap(pointer_1,pointer_2);
	if(*pointer_1<*pointer_3) pointer_swap(pointer_1,pointer_3);
	if(*pointer_2<*pointer_3) pointer_swap(pointer_2,pointer_3);
	printf("从大到小输出为：");
	printf("%2d%2d%2d\n",a,b,c);
	printf("最大值：max=%d\n最小值：min=%d\n",*pointer_1,*pointer_3);
	return 0;
	}
void pointer_swap(int *p1,int *p2)//定义两个临时指针变量，因为这两个指针的指向每次都在变化
	{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;//相当于直接用变量a、b、c做值得交换
	}
