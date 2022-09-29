#include<stdio.h>
int main()
{
	int i=0,base,D_num,j,num[20],n;
	printf("请输入需要转换的十进制数:");
	scanf("%d",&D_num);
	n=D_num;
	printf("请输入进制转换的基数:");
	scanf("%d",&base);
	while(D_num!=0)
		{
			num[i++]=D_num%base;
			D_num=D_num/base;
		}
	printf("十进制数%d转换为%d进制数为:",n,base);
	for(j=i-1;j>=0;j--)//减去最后一次i++的值
		printf("%d",num[j]);
	putchar(10);
	return 0;
}