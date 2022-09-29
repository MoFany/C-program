#include<stdio.h>
int fac(int base)//保留的小数位
{
	if(base==1)
		return 10;
	else
		return fac(base-1)*10;
}
float radix_point(float fnum,int base)//四舍五入
{
	fnum=(int)(fnum*fac(base)+0.5)/(float)fac(base);
	return fnum;
}
int main()
{
	int base;
	float fnum;
	printf("请输入需要四舍五入的浮点数和需要保留的位数:");
	scanf("%f%d",&fnum,&base);
	printf("四舍五入保留%d位小数!\n",base);
	printf("fnum=%f\n",radix_point(fnum,base));
	printf("fnum=%.*f\n",base,radix_point(fnum,base));
	return 0;
}