#include<stdio.h>
int main()
	{
	void sort(int *p[]);
	int a[3],i;
	int *p[3]={(a+0),(a+1),(a+2)};

	printf("���������������Ԫ��ֵ��");
	for(i=0;i<3;i++)
		scanf("%d",p[i]);
	printf("�������ý��д�С��������!\n");
	sort(p);
	return 0;
	}
void sort(int *p[])
	{
	int i,j,*temp;
	for(j=0;j<2;j++)
		for(i=0;i<2-j;i++)
			if(*p[i]>*p[i+1])
				{temp=p[i];p[i]=p[i+1];p[i+1]=temp;}//�ı�ָ�������и���ָ�����Ԫ�ص�ָ��

	printf("˳����������ĸ�Ԫ��ֵ��");
	for(i=0;i<3;i++)
		printf("%d ",*p[i]);
	printf("\n");
	}
