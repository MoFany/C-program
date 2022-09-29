#include<stdio.h>
int main()
{int a[10],i,j,k,n=10,m,temp;
printf("输入数组的元素值:");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);
printf("输入后移位置M的值:");
scanf("%d",&m);
printf("进行数组元素值的交换排序!\n");
for(i=n-1;i>=n-m;i--)
	{k=i;
	for(j=n-m-1;j>=0;j--)
	{temp=a[j];a[j]=a[k];a[k]=temp;k=j;}}
printf("交换排序后顺序输出数组元素的值为:");
for(i=0;i<10;i++)
	printf("%d ",a[i]);
printf("\n");
return 0;
}