#include<stdio.h>
#include<math.h>
int main()
{
	int a=1;
	double i=1,b,c=1;

	while(fabs(b)>=1e-6)//条件判断b的绝对值不能小于10的-6次方调整圆周率的精确度可以为1e-8		
	{
		i+=2;//增量控制器
		a=-1*a;//控制正负号
		b=(1/i)*a;//每一次的分数
		c=c+b;//累加和

		printf("\t\t\t圆周率的近似值：%0.16f\n",c*4);
		
	}

	printf("\n\t\t\t%0.15f的绝对值小于10的-6次方\n",b);
return 0;
}
