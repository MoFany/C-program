#include<stdio.h>
int main()
{
	typedef int count;
	count a[10],i;
	printf("请输入用新类型名count定义的整型数组a的各个元素值：");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));
	printf("输出：");
	for(i=0;i<10;i++)
		printf("%d\n",*(a+i));//pintf("%d",a[i]);
return 0;
}