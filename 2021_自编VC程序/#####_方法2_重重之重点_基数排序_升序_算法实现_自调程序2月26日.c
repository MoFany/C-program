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
		int i,bucket[10]={0};//声明一个桶，并初始化为0，使每次调用该函数时都得以初始化为0，每次使桶内所有元素重置为0
		int *t=(int *)malloc(sizeof(int)*length);//声明一个指针变量用于临时存储每次排序后的值，并为其分配存储空间
		
		for(i=0;i<length;i++)
			bucket[a[i]/base%10]++;//当每个桶有数时每个桶内计数器就加1
		for(i=1;i<10;i++)
			bucket[i]+=bucket[i-1];//等价于bucket[i]+=bucket[i-1]，本次桶内计数器值加前一次桶内计数器值，求累加
		for(i=length-1;i>=0;i--)
		{
			t[bucket[a[i]/base%10]-1]=a[i];//桶内计数器的值减1对应于数组a中相应的元素值
			bucket[a[i]/base%10]--;//将桶内相应的计数器值减去，出桶一个元素减去1，以方便下一次重新计数
		}
		Valuation(a,t,length);//调用Valuation函数赋值于数组a
	}
void Base(int a[],int length)
	{
		int i,max=a[0];
		for(i=1;i<length;i++)
			if(max<a[i])
				max=a[i];//最大值的位数决定了调用函数RadixSort的次数
		for(i=1;max/i>0;i*=10)
				RadixSort(a,i,length);//调用RadixSort函数使原始序列升序排序
	}
int main()
	{
		int i,length,n;

		int array[10000]={0};
		srand(time(NULL));//随机种子，要产生随机数
		for(i=0;i<10000;i++)
			array[i]=rand()%1000;//产生10000个小于1000的随机数

		length=sizeof(array)/sizeof(array[0]);//求数组的实际长度
		printf("Initial sequence is:\n");
		for(i=0;i<length;i++)
			printf("%-5d",array[i]);//输出随机产生的原始序列
		Base(array,length);//调用Base函数
		printf("\n\nRadix sort is:");
		for(i=0,n=0;i<length;i++,n++)
		{	
			if(n%39!=0)//n若是39的倍数则换行
				printf("%-5d",array[i]);//输出排序后的序列
			
			else 
				printf("\n");
		}
		printf("\n");
		//system("pause");//系统命令行调用
		return 0;
	}