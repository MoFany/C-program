#include<stdio.h>
int fac(int base)//������С��λ
{
	if(base==1)
		return 10;
	else
		return fac(base-1)*10;
}
float radix_point(float fnum,int base)//��������
{
	fnum=(int)(fnum*fac(base)+0.5)/(float)fac(base);
	return fnum;
}
int main()
{
	int base;
	float fnum;
	printf("��������Ҫ��������ĸ���������Ҫ������λ��:");
	scanf("%f%d",&fnum,&base);
	printf("�������뱣��%dλС��!\n",base);
	printf("fnum=%f\n",radix_point(fnum,base));
	printf("fnum=%.*f\n",base,radix_point(fnum,base));
	return 0;
}