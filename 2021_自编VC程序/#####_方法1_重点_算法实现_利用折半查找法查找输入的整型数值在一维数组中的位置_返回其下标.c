#include<stdio.h>
#define MaxSize 10
int Binsearch(int *a,int findnum)//升序:折半查找(二分查找)
	{
		int low=0,high=MaxSize-1,mid;
		mid=(low+high)/2;
		while(high>=low)
			{
				if(findnum>a[mid])
					low=mid+1;
				else
					if(findnum==a[mid])
						return mid;
					else
						if(findnum<a[mid])
							high=mid-1;
				mid=(low+high)/2;
			}
		return mid;
	}
int main()
	{
		int array[MaxSize],number,i,mid;
		printf("请按照值从小到大升序给数组初始化:\n");
		for(i=0;i<MaxSize;i++)
			scanf("%d",&array[i]);
		printf("请输入需要查找的值(number):");
		scanf("%d",&number);
		mid=Binsearch(array,number);
		if(array[mid]==number)
			printf("查找成功!\narray[%d]=%d\n",mid,number);
		else
			printf("查找失败!未找到!\n");
		return 0;
	}