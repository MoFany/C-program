#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
	{
		void InsertSort(int *a,int length);
		int a[10],i,len;
		srand(time(NULL));
		for(i=0;i<10;i++)
			a[i]=rand()%10;//�����������10��10���ڵ�����
		len=sizeof(a)/sizeof(a[0]);
		printf("Random number is:\n");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);//��������
		printf("\n");

		InsertSort(a,len);
		printf("Insert sort is:\n");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);//�������������
		printf("\n");
		return 0;
	}
void InsertSort(int *a,int length)
	{
		int i,j,temp;
		for(i=0;i<length;i++)
		{
			temp=a[i+1];//��¼�������к��������ĵ�һ����
			for(j=i;j>=0;j--)
				if(temp<a[j])
				{
					a[j+1]=a[j];
					a[j]=temp;
				}
		}
	}