#include<stdio.h>
#define PI 3.1416
int main()
{
	double r,h,c,s1,s2,v1,v2;
	scanf("r=%lf,h=%lf",&r,&h);
	//scanf("%lf%lf",&r,&h);上面这种输入方式必须要有逗号作为分隔符，要不然读不到h的值。
	c=2*PI*r;
	s1=PI*r*r;
	s2=4*s1;
	v1=(4/3)*s1*r;
	v2=s1*h;
	printf("圆周长c=%0.2f\n",c);
	printf("圆面积s1=%0.2f\n圆球表面积s2=%0.2f\n",s1,s2);
	printf("圆球体积v1=%0.2f\n圆柱体积v2=%0.2f\n",v1,v2);
return 0;
}