#include<stdio.h>
int main()
	{
	int a[3][4],i,j;
	int *pointer_1;
	printf("输入二维数组的元素：");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",(*(a+i)+j));
	printf("输出二维数组的元素：");
//	for(pointer_1=*a;pointer_1<a[0]+4;pointer_1++)
//		printf("%d  ",*pointer_1);
//	for(pointer_1=*(a+1);pointer_1<a[1]+4;pointer_1++)
//		printf("%d ",*pointer_1);
//	for(pointer_1=*(a+2);pointer_1<a[2]+4;pointer_1++)
//		printf("%d ",*pointer_1);
/*---------------上面三个for循环等价于下面这个嵌套的for循环---------------------*/
	for(i=0;i<3;i++)
		for(pointer_1=*(a+i);pointer_1<a[i]+4;pointer_1++)
			printf("%d ",*pointer_1);
	printf("\n");
	return 0;
	}
