#include<stdio.h>
int main()
	{
	void sort(int *p[]);
	int a[3],i;
	int *p[3]={(a+0),(a+1),(a+2)};

	printf("请输入数组的三个元素值：");
	for(i=0;i<3;i++)
		scanf("%d",p[i]);
	printf("函数调用进行从小到大排序!\n");
	sort(p);
	return 0;
	}
void sort(int *p[])
	{
	int i,j,*temp;
	for(j=0;j<2;j++)
		for(i=0;i<2-j;i++)
			if(*p[i]>*p[i+1])
				{temp=p[i];p[i]=p[i+1];p[i+1]=temp;}//改变指针数组中各个指针变量元素的指向

	printf("顺序输出排序后的各元素值：");
	for(i=0;i<3;i++)
		printf("%d ",*p[i]);
	printf("\n");
	}
