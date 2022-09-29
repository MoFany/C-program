#include<time.h>
#include<stdlib.h>
#include<stdio.h>
//2021年2月24晚上21:16自调程序----基数排序《升序》-----出桶的顺序一定是先入先出与队列一样
void RadixSort(int *a,int length)
	{
		int i,max=a[0],base=1;
		int *t=NULL;//定义新数组
		for(i=1;i<length;i++)
			if(max<a[i])
				max=a[i];
		t=(int *)malloc(sizeof(int)*length);
		while(max/base>0)
		{
			int bucket[10]={0};//定义10个桶，并初始化为0，切记一定要放在while循环之内，每一次循环数组都应该被初始化为0
			for(i=0;i<length;i++)
				bucket[a[i]/base%10]++;//数组(桶)中有数的位置加1，相当于初始化bucket[i]的每个元素；
			for(i=1;i<10;i++)//共有10个桶
				bucket[i]+=bucket[i-1];//当前桶累加上一个桶中计数器的值，相当于再一次改变bucket[i]的每个元素值；
			for(i=length-1;i>=0;i--)
			{
				t[bucket[a[i]/base%10]-1]=a[i];//每个桶中计数器的值减1等于其对应于该数在新数组的位置；
				bucket[a[i]/base%10]--;//每个桶中计数器清零
			}
			for(i=0;i<length;i++)
				a[i]=t[i];//将新数组中的值依次赋值于原始数组，原始数组中的数值顺序将刷新
			base*=10;
		}
		/*for(i=0;i<length;i++)
			a[i]=t[length-1-i];*///加上本条语句将会按照从大到小，降序排序；最后free(t);可有可无，也可以等被调函数执行结束时自动释放其空间
	}
int main()
	{
		int i,length;
		//int array[]={10,15,19,0,54};
		int array[10000]={0};
		length=sizeof(array)/sizeof(array[0]);//求数组的实际长度
		srand(time(NULL));//随机种子，要产生随机数
		for(i=0;i<length;i++)
			array[i]=rand()%1000;//产生10000个小于1000的随机数
		printf("Initial sequence is:");
		for(i=0;i<length;i++)
			printf("%-5d",array[i]);//输出随机产生的原始序列
		RadixSort(array,length);//调用RadixSort函数按升序排序
		printf("\n\nRadix sort is:");
		for(i=0;i<length;i++)
			printf("%-5d",array[i]);//输出排序后的序列
		printf("\n");
		//system("pause");//系统命令行调用
		return 0;
	}