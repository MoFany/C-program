#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("键盘输入三个整数!\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a>(b>c?b:c)?a:(b>c?b:c);//	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("Max=%d\n",max);
	return 0;
}