#include<stdio.h>
int main()
	{
	void pointer_reverse(int *p);
	int array[10],*pointer_1,i;
	pointer_1=array;
	printf("��������������array��10��Ԫ�أ�");
	for(i=0;i<10;i++)
		scanf("%d",pointer_1++);//���ָ�������ָ���Ԫ��Ϊpointer=&a[10];������ִ��--p���洢��
	printf("�����ʱδ���õ�array����Ԫ�أ�");
	for(i=0;i<10;i++)
		printf("%2d",array[i]);
	pointer_reverse(pointer_1);
	printf("\narray����Ԫ�ط������Ϊ��");
	for(i=0;i<10;i++)
		printf("%2d",*(array+i));
	printf("\n");
	return 0;
	}
void pointer_reverse(int *p)
{
	int i,a[10],j=0;
	for(i=9;i>=0;i--)
		a[j++]=*--p;//ͨ��һ���������������洢ÿ��*p--�����ĵ�ַ��ָ�������ֵ
	for(i=0;i<10;i++)
		*(p++)=a[i];//�������������е�ֵ��˳��ֵ��*(p++)���Ӷ��ı�ԭ����array�е�ÿ��Ԫ��
}
