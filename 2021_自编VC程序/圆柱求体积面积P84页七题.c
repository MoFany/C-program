#include<stdio.h>
#define PI 3.1416
int main()
{
	double r,h,c,s1,s2,v1,v2;
	scanf("r=%lf,h=%lf",&r,&h);
	//scanf("%lf%lf",&r,&h);�����������뷽ʽ����Ҫ�ж�����Ϊ�ָ�����Ҫ��Ȼ������h��ֵ��
	c=2*PI*r;
	s1=PI*r*r;
	s2=4*s1;
	v1=(4/3)*s1*r;
	v2=s1*h;
	printf("Բ�ܳ�c=%0.2f\n",c);
	printf("Բ���s1=%0.2f\nԲ������s2=%0.2f\n",s1,s2);
	printf("Բ�����v1=%0.2f\nԲ�����v2=%0.2f\n",v1,v2);
return 0;
}