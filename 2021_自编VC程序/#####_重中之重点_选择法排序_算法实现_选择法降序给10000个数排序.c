#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectsort(int *a,int length)//����
	{
		int i,j,max,r,temp;
		for(i=0;i<length;i++)
			{
				r=i;
				max=a[i];
				for(j=i;j<length;j++)//j��iͬ��
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
		printf("���������!\n");
		srand(time(NULL));
		for(i=0;i<10000;i++)
			array[i]=rand()%1000;
		len=sizeof(array)/sizeof(array[0]);
		printf("��ʼ��������������ֵ:\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\nѡ������!\n");
		selectsort(array,len);
		printf("ѡ����������!\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\n");
		return 0;
	}