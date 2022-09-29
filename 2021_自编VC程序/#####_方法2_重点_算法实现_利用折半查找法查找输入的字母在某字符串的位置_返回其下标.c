#include<stdio.h>
#define MaxSize 100
int Binsearch(char *a,char letter)//升序:折半查找(二分查找)
	{
		int low=0,high=MaxSize-1,mid;
		mid=(low+high)/2;
		while(high>=low)
			{
				if(letter>a[mid])
					low=mid+1;
				else
					if(letter==a[mid])
						return mid;
					else
						if(letter<a[mid])
							high=mid-1;
				mid=(low+high)/2;
			}
		return mid;
	}
int main()
	{
		char letter,array[MaxSize]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		int mid;
		printf("请输入需要查找的字母(letter):");
		letter=getchar();
		mid=Binsearch(array,letter);
		if(array[mid]==letter)
			printf("查找成功!\narray[%d]=%c\n",mid,letter);
		else
			printf("*****查找失败!未找到!******\n");
		return 0;
	}