#include<stdio.h>
#define MaxSize 100
int Binsearch(char *a,char letter)//����:�۰����(���ֲ���)
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
		printf("��������Ҫ���ҵ���ĸ(letter):");
		letter=getchar();
		mid=Binsearch(array,letter);
		if(array[mid]==letter)
			printf("���ҳɹ�!\narray[%d]=%c\n",mid,letter);
		else
			printf("*****����ʧ��!δ�ҵ�!******\n");
		return 0;
	}