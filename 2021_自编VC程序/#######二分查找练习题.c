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
				if(elemt>a[mid])//����
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
		printf("�����������%d����!\n",MaxSize);
		for(i=0;i<MaxSize;i++)
			scanf("%d",&array[i]);
		printf("��������Ҫ���ҵ�Ԫ��ֵ!\n");
		scanf("%d",&number);
		printf("�����в��Ҹ�Ԫ�ص�λ��!\n");
		n=BinarySearch(array,MaxSize,number);
		if(n!=0)
			printf("λ��Ϊ:%d\n",n);
		else
			printf("δ�ҵ�!\n");
		return 0;
	}