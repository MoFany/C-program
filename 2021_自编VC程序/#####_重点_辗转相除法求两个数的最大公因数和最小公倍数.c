#include<stdio.h>
int main()
{
	int a, b, temp, r, m;
	printf("շת��������������������������С������!\n");
	printf("������������:");
	scanf_s("%d%d",&a,&b);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	m = a * b;//����������С���������������=���������ĳ˻�
	r = a % b;
	while (r)
	{
		a = b;
		b = r;
		r = a % b;
	}
	m = m / b;
	printf("�������Ϊ:%d\n��С������Ϊ:%d\n",b,m);
	return 0;
}