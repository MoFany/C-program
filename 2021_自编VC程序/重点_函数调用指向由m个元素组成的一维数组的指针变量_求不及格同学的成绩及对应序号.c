#include<stdio.h>
int main()
	{
	void score(int (*p1)[4],int n);
	int array[3][4],i;
	int *pointer_1;
	printf("请输入3位同学的四科成绩：\n");
	for(i=0;i<3;i++)
		for(pointer_1=*(array+i);pointer_1<array[i]+4;pointer_1++)
			scanf("%d",pointer_1);
	score(array,3);
	return 0;
	}
void score(int (*p1)[4],int n)//函数的形参(*p1)[4]意为一个指向包含4个元素的一维数组，其值为一维数组的起始地址
	{
	int i,j,k;
	for(i=0;i<n;i++)
		{
		for(j=0;j<4;j++)
			if(*(*(p1+i)+j)<60)
				{printf("%d ",*(*(p1+i)+j));k=0;}
		if(k==0)
			{k=1;
			printf(":为不及格科目成绩，");
			printf("学生序号为：%d\n",i);}
		}
	if(k!=1)
		printf("3位同学所有科目均合格!\n");
	}

