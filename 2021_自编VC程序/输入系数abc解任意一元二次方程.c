#include"stdio.h"
#include"math.h"
void main()
{
double a,b,c,x1,x2;
scanf("%lf%lf%lf",&a,&b,&c);
if(a>0 || a<0)
	if((b*b-4*a*c)<0)
		printf("该一元二次方程在实数范围内无实根!\n");
	else
		{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%7.3f\nx2=%7.3f\n",x1,x2);
		}
else
	printf("该方程不是一元二次方程!\n");
}