#include<stdio.h>
#define MaxSize 10
int Binsearch(int *a,int findnum)//����:�۰����(���ֲ���)
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
		printf("�밴��ֵ��С��������������ʼ��:\n");
		for(i=0;i<MaxSize;i++)
			scanf("%d",&array[i]);
		printf("��������Ҫ���ҵ�ֵ(number):");
		scanf("%d",&number);
		mid=Binsearch(array,number);
		if(array[mid]==number)
			printf("���ҳɹ�!\narray[%d]=%d\n",mid,number);
		else
			printf("����ʧ��!δ�ҵ�!\n");
		return 0;
	}