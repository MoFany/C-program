#include<stdio.h>
int main()
	{
	int a[10],i;
	int *pointer,*max,*min,temp;//定义三个指针变量
	min=max=a;//指针变量max与min初始值都指向a数组首元素的地址
	printf("Please enter 10 integers:");
	for(pointer=a;pointer<(a+10);pointer++)
		scanf("%d",pointer);
	printf("Output array:");
	for(pointer=a;pointer<(a+10);pointer++)
		printf("%d ",*pointer);
	for(pointer=a;pointer<(a+10);pointer++)
		max=*pointer>*max?pointer:max;
	for(pointer=a;pointer<(a+10);pointer++)
		min=*pointer<*min?pointer:min;
	printf("\nMax=%2d\nMin=%2d",*max,*min);
	printf("\nswap array:");
	if(*max==a[9] && *min==a[0])
			;
	else 
		if(*max==a[0] && *min==a[9])
			{temp=a[9];a[9]=*max;*max=temp;}
		else
			{
				{temp=a[9];a[9]=*max;*max=temp;}
				{temp=a[0];a[0]=*min;*min=temp;}
			}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
	}
