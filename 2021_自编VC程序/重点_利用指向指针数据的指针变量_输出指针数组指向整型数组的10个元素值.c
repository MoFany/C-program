#include<stdio.h>
int main()
	{
	int a[10],i;
	int *array[10]={(a+0),(a+1),(a+2),(a+3),(a+4),(a+5),(a+6),(a+7),(a+8),(a+9)};
//指针数组中的每一个元素都是一个指针变量,使指针数组srray中的每个元素都指向a数组中对应元素的地址。
	int **pointer;
//指向指针型数据的指针变量，分解为:itn *与* pointer
	printf("请输入整型数组的10个元素:");
	for(i=0;i<10;i++)
		scanf("%d",a+i);

	printf("利用指向指针数据的指针变量输出10个元素:");
	for(i=0;i<10;i++)
		{pointer=array+i;printf("%d ",**pointer);}
//单*pointer输出结果为指针数组array元素的值(地址),双**p为指针数组array元素指向数组a中对应元素地址指向的元素值
	printf("\n");
	return 0;
	}
