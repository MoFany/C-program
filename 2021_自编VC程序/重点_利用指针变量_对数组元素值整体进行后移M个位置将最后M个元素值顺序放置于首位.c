#include<stdio.h>
int main()
	{
	void sort(int *p,int,int);//��������
	int a[10],N=10,M,i;
	int *pointer;//����һ��ָ���������ݵ�ָ�����
	pointer=a;//ʹָ�����pointerָ������a����Ԫ�صĵ�ַ
	printf("Please input array values:");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));//���õ�ַ����������aԪ��ֵ������
	printf("Please enter M:");
	scanf("%d",&M);
	sort(pointer,N,M);//��������
	printf("Output after sorting!\n");
	for(i=0;i<10;i++)
		printf("%d ",*(a+i));//���õ�ַ����˳���������a������ֵ
	printf("\n");
	return 0;
	}
void sort(int *p,int n,int m)
	{
	int *i,*j,*d,k=n-m,temp;//��������ָ�����
	for(i=p+(n-1);i>=(p+k);i--)
		{
		d=i;
		for(j=p+(k-1);j>=p;j--)
		{temp=*j;*j=*d;*d=temp;d=j;}//����ָ���������ָ������Ԫ��ֵ�Ľ���
		}
	}
	