#include<stdio.h>
int main()
	{
	void pointer_ASC(int *p1,int *p2,int *p3);
	int a,b,c;
	int *pointer_1,*pointer_2,*pointer_3;
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	printf("请乱序输入三个正整数：");
	scanf("%d%d%d",&a,&b,&c);//等价于：scanf("%d%d%d",pointer_1,pointer_2,pointer_3);
	pointer_ASC(pointer_1,pointer_2,pointer_3);
	return 0;
	}
void pointer_ASC(int *p1,int *p2,int *p3)
	{
	int p;
	printf("从小到大输出为：");

	if(*p1>*p2) {p=*p1;*p1=*p2;*p2=p;}

	if(*p1>*p3) {p=*p1;*p1=*p3;*p3=p;}

	if(*p2>*p3) {p=*p2;*p2=*p3;*p3=p;}

	printf("%2d%2d%2d\n",*p1,*p2,*p3);

	printf("最大值：max=%d\n最小值：min=%d\n",*p3,*p1);
	}
