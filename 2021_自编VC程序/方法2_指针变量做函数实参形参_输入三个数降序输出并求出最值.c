#include<stdio.h>
int main()
	{
	void pointer_swap(int *p1,int *p2);
	int a,b,c;
	int *pointer_1,*pointer_2,*pointer_3;
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	printf("����������������������");
	scanf("%d%d%d",pointer_1,pointer_2,pointer_3);
	if(*pointer_1<*pointer_2) pointer_swap(pointer_1,pointer_2);
	if(*pointer_1<*pointer_3) pointer_swap(pointer_1,pointer_3);
	if(*pointer_2<*pointer_3) pointer_swap(pointer_2,pointer_3);
	printf("�Ӵ�С���Ϊ��");
	printf("%2d%2d%2d\n",a,b,c);
	printf("���ֵ��max=%d\n��Сֵ��min=%d\n",*pointer_1,*pointer_3);
	return 0;
	}
void pointer_swap(int *p1,int *p2)//����������ʱָ���������Ϊ������ָ���ָ��ÿ�ζ��ڱ仯
	{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;//�൱��ֱ���ñ���a��b��c��ֵ�ý���
	}
