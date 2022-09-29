#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubblesort(int *a,int length)//冒泡排序降序
	{
		int i,j,temp;
		for(i=0;i<length-1;i++)
			for(j=0;j<length-1-i;j++)//重点内循环j=0从0开始
				if(a[j]<a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
	}
int main()
	{
		int array[10000],i,len;
		printf("生成随机数!\n");
		srand(time(NULL));
		for(i=0;i<10000;i++)
			array[i]=rand()%1000;
		len=sizeof(array)/sizeof(array[0]);
		printf("初始化后输出数组随机值:\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\n冒泡法排序!\n");
		bubblesort(array,len);
		printf("冒泡法排序后输出!\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\n");
		return 0;
	}