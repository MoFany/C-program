#include<stdio.h>
#define swap(x,y) {int temp;temp=x;x=y;y=temp;}
int main()
{
	int a,b;
	printf("������a��b��ֵ:");
	scanf("%d%d",&a,&b);
	printf("a=%d\nb=%d\n",a,b);
	printf("����a��b��ֵ�����!\n");
	swap(a,b);
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}