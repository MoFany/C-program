#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
	{
		void InsertSort(int *a,int length);
		int a[10],i,len;
		srand(time(NULL));
		for(i=0;i<10;i++)
			a[i]=rand()%10;//产生随机数：10个10以内的整数
		len=sizeof(a)/sizeof(a[0]);
		printf("Random number is:\n");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);//输出随机数
		printf("\n");

		InsertSort(a,len);
		printf("Insert sort is:\n");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);//输出排序后的数列
		printf("\n");
		return 0;
	}
void InsertSort(int *a,int length)
	{
		int i,j,temp;
		for(i=0;i<length;i++)
		{
			temp=a[i+1];//记录有序序列后面待排序的第一个数
			for(j=i;j>=0;j--)
				if(temp<a[j])
				{
					a[j+1]=a[j];
					a[j]=temp;
				}
		}
	}