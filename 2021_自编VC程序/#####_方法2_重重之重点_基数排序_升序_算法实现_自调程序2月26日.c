#include<time.h>
#include<stdlib.h>
#include<stdio.h>
void Valuation(int a[],int t[],int length)
	{
		int i;
		for(i=0;i<length;i++)
			a[i]=t[i];
	}
void RadixSort(int a[],int base,int length)
	{
		int i,bucket[10]={0};//����һ��Ͱ������ʼ��Ϊ0��ʹÿ�ε��øú���ʱ�����Գ�ʼ��Ϊ0��ÿ��ʹͰ������Ԫ������Ϊ0
		int *t=(int *)malloc(sizeof(int)*length);//����һ��ָ�����������ʱ�洢ÿ��������ֵ����Ϊ�����洢�ռ�
		
		for(i=0;i<length;i++)
			bucket[a[i]/base%10]++;//��ÿ��Ͱ����ʱÿ��Ͱ�ڼ������ͼ�1
		for(i=1;i<10;i++)
			bucket[i]+=bucket[i-1];//�ȼ���bucket[i]+=bucket[i-1]������Ͱ�ڼ�����ֵ��ǰһ��Ͱ�ڼ�����ֵ�����ۼ�
		for(i=length-1;i>=0;i--)
		{
			t[bucket[a[i]/base%10]-1]=a[i];//Ͱ�ڼ�������ֵ��1��Ӧ������a����Ӧ��Ԫ��ֵ
			bucket[a[i]/base%10]--;//��Ͱ����Ӧ�ļ�����ֵ��ȥ����Ͱһ��Ԫ�ؼ�ȥ1���Է�����һ�����¼���
		}
		Valuation(a,t,length);//����Valuation������ֵ������a
	}
void Base(int a[],int length)
	{
		int i,max=a[0];
		for(i=1;i<length;i++)
			if(max<a[i])
				max=a[i];//���ֵ��λ�������˵��ú���RadixSort�Ĵ���
		for(i=1;max/i>0;i*=10)
				RadixSort(a,i,length);//����RadixSort����ʹԭʼ������������
	}
int main()
	{
		int i,length,n;

		int array[10000]={0};
		srand(time(NULL));//������ӣ�Ҫ���������
		for(i=0;i<10000;i++)
			array[i]=rand()%1000;//����10000��С��1000�������

		length=sizeof(array)/sizeof(array[0]);//�������ʵ�ʳ���
		printf("Initial sequence is:\n");
		for(i=0;i<length;i++)
			printf("%-5d",array[i]);//������������ԭʼ����
		Base(array,length);//����Base����
		printf("\n\nRadix sort is:");
		for(i=0,n=0;i<length;i++,n++)
		{	
			if(n%39!=0)//n����39�ı�������
				printf("%-5d",array[i]);//�������������
			
			else 
				printf("\n");
		}
		printf("\n");
		//system("pause");//ϵͳ�����е���
		return 0;
	}