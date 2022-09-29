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
		for(i=1;i<length;i++)//后面待排序的数
		{
			temp=a[i];
			for(j=i-1;j>=0;j--)//前面的有序序列
				if(temp<a[j])
					a[j+1]=a[j];//若前面的有序序列不在大于后面的待排序值时，则不用在继续循环比较break
				else
					break;
			a[j+1]=temp;//给当前元素的下一个元素赋值，因为for循环时最后一次j自减了一次
		}
	}