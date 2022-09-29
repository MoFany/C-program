#include<stdio.h>
#define swap(x,y) {int temp;temp=x;x=y;y=temp;}
int main()
{
	int a,b;
	printf("请输入a与b的值:");
	scanf("%d%d",&a,&b);
	printf("a=%d\nb=%d\n",a,b);
	printf("交换a与b的值后输出!\n");
	swap(a,b);
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}