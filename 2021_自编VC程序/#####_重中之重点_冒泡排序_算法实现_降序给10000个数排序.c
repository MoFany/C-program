#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubblesort(int *a,int length)//ð��������
	{
		int i,j,temp;
		for(i=0;i<length-1;i++)
			for(j=0;j<length-1-i;j++)//�ص���ѭ��j=0��0��ʼ
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
		printf("���������!\n");
		srand(time(NULL));
		for(i=0;i<10000;i++)
			array[i]=rand()%1000;
		len=sizeof(array)/sizeof(array[0]);
		printf("��ʼ��������������ֵ:\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\nð�ݷ�����!\n");
		bubblesort(array,len);
		printf("ð�ݷ���������!\n");
		for(i=0;i<len;i++)
			printf("%5d",array[i]);
		printf("\n");
		return 0;
	}