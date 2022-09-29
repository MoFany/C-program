#include<time.h>
#include<stdlib.h>
#include<stdio.h>
//2021��2��24����21:16�Ե�����----������������-----��Ͱ��˳��һ���������ȳ������һ��
void RadixSort(int *a,int length)
	{
		int i,max=a[0],base=1;
		int *t=NULL;//����������
		for(i=1;i<length;i++)
			if(max<a[i])
				max=a[i];
		t=(int *)malloc(sizeof(int)*length);
		while(max/base>0)
		{
			int bucket[10]={0};//����10��Ͱ������ʼ��Ϊ0���м�һ��Ҫ����whileѭ��֮�ڣ�ÿһ��ѭ�����鶼Ӧ�ñ���ʼ��Ϊ0
			for(i=0;i<length;i++)
				bucket[a[i]/base%10]++;//����(Ͱ)��������λ�ü�1���൱�ڳ�ʼ��bucket[i]��ÿ��Ԫ�أ�
			for(i=1;i<10;i++)//����10��Ͱ
				bucket[i]+=bucket[i-1];//��ǰͰ�ۼ���һ��Ͱ�м�������ֵ���൱����һ�θı�bucket[i]��ÿ��Ԫ��ֵ��
			for(i=length-1;i>=0;i--)
			{
				t[bucket[a[i]/base%10]-1]=a[i];//ÿ��Ͱ�м�������ֵ��1�������Ӧ�ڸ������������λ�ã�
				bucket[a[i]/base%10]--;//ÿ��Ͱ�м���������
			}
			for(i=0;i<length;i++)
				a[i]=t[i];//���������е�ֵ���θ�ֵ��ԭʼ���飬ԭʼ�����е���ֵ˳��ˢ��
			base*=10;
		}
		/*for(i=0;i<length;i++)
			a[i]=t[length-1-i];*///���ϱ�����佫�ᰴ�մӴ�С�������������free(t);���п��ޣ�Ҳ���Եȱ�������ִ�н���ʱ�Զ��ͷ���ռ�
	}
int main()
	{
		int i,length;
		//int array[]={10,15,19,0,54};
		int array[10000]={0};
		length=sizeof(array)/sizeof(array[0]);//�������ʵ�ʳ���
		srand(time(NULL));//������ӣ�Ҫ���������
		for(i=0;i<length;i++)
			array[i]=rand()%1000;//����10000��С��1000�������
		printf("Initial sequence is:");
		for(i=0;i<length;i++)
			printf("%-5d",array[i]);//������������ԭʼ����
		RadixSort(array,length);//����RadixSort��������������
		printf("\n\nRadix sort is:");
		for(i=0;i<length;i++)
			printf("%-5d",array[i]);//�������������
		printf("\n");
		//system("pause");//ϵͳ�����е���
		return 0;
	}