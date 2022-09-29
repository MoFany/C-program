#include<stdio.h>
int main()
{
	int a, b, temp, r, m;
	printf("辗转相除法求两个数的最大公因数和最小公倍数!\n");
	printf("请输入两个数:");
	scanf_s("%d%d",&a,&b);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	m = a * b;//两个数的最小公倍数乘最大公因数=这两个数的乘积
	r = a % b;
	while (r)
	{
		a = b;
		b = r;
		r = a % b;
	}
	m = m / b;
	printf("最大公因数为:%d\n最小公倍数为:%d\n",b,m);
	return 0;
}