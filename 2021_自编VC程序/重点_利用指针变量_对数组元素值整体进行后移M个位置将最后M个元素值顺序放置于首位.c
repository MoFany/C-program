#include<stdio.h>
int main()
	{
	void sort(int *p,int,int);//函数声明
	int a[10],N=10,M,i;
	int *pointer;//定义一个指向整型数据的指针变量
	pointer=a;//使指针变量pointer指向数组a的首元素的地址
	printf("Please input array values:");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));//利用地址法进行数组a元素值的输入
	printf("Please enter M:");
	scanf("%d",&M);
	sort(pointer,N,M);//函数调用
	printf("Output after sorting!\n");
	for(i=0;i<10;i++)
		printf("%d ",*(a+i));//利用地址法按顺序输出数组a排序后的值
	printf("\n");
	return 0;
	}
void sort(int *p,int n,int m)
	{
	int *i,*j,*d,k=n-m,temp;//定义三个指针变量
	for(i=p+(n-1);i>=(p+k);i--)
		{
		d=i;
		for(j=p+(k-1);j>=p;j--)
		{temp=*j;*j=*d;*d=temp;d=j;}//利用指针变量进行指向数组元素值的交换
		}
	}
	