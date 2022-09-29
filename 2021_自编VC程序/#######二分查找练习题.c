#include<stdio.h>
#define MaxSize 10
int BinarySearch(int *a,int len,int elemt)
	{
		int low,high,mid;
		low=0;
		high=len-1;
		mid=(low+high)/2;
		while(high>low)
		{	
			if(elemt==a[mid])
				 break;
			else
				if(elemt>a[mid])//升序
					low=mid+1;
				else
					if(elemt<a[mid])
						high=mid-1;
			mid=(low+high)/2;
		}
		return elemt==a[mid]?mid+1:0;
	}

int main()	
	{
		int array[MaxSize],number,i,n;
		printf("请升序的输入%d个数!\n",MaxSize);
		for(i=0;i<MaxSize;i++)
			scanf("%d",&array[i]);
		printf("请输入需要查找的元素值!\n");
		scanf("%d",&number);
		printf("数组中查找该元素的位置!\n");
		n=BinarySearch(array,MaxSize,number);
		if(n!=0)
			printf("位置为:%d\n",n);
		else
			printf("未找到!\n");
		return 0;
	}