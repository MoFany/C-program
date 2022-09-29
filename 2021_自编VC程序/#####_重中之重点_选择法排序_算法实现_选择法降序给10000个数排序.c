#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectsort(int *a,int length)//降序
	{
		int i,j,max,r,temp;
		for(i=0;i<length;i++)
			{
				r=i;
				max=a[i];
				for(j=i;j<length;j++)//j与i同步
					if(a[j]>max)
						{
							max=a[j];
							r=j;
						}
				if(r!=i)//r!=i
					{
						temp=a[i];
						a[i]=a[r];
						a[r]=temp;
					}
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
		printf("\n选择法排序!\n");
		selectsort(array,len);
		printf("选择法排序后输出!\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\n");
		return 0;
	}