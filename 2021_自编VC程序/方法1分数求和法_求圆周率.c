#include<stdio.h>
#include<math.h>
int main()
{
	int a=1;
	double i=1,b,c=1;

	while(fabs(b)>=1e-6)//�����ж�b�ľ���ֵ����С��10��-6�η�����Բ���ʵľ�ȷ�ȿ���Ϊ1e-8		
	{
		i+=2;//����������
		a=-1*a;//����������
		b=(1/i)*a;//ÿһ�εķ���
		c=c+b;//�ۼӺ�

		printf("\t\t\tԲ���ʵĽ���ֵ��%0.16f\n",c*4);
		
	}

	printf("\n\t\t\t%0.15f�ľ���ֵС��10��-6�η�\n",b);
return 0;
}
