#include<stdio.h>
int main()
	{
	void sort(int array[]);
	int a[10],i,*pointer_1;
	pointer_1=a;
	printf("����������array��10��Ԫ�أ�");
	for(i=0;i<10;i++)
		scanf("%d",(a+i));
	printf("��С�����������arrayԪ��Ϊ��");
  	sort(pointer_1);
	for(pointer_1=a;pointer_1<a+10;pointer_1++)//���ָ�����pointer_1��Ӧ����Ԫ�ص�ַ��ָ���ֵ
		printf("%2d",*pointer_1);
	printf("\n");
	return 0;
	}
void sort(int array[])
	{
	int i,j,temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(array[j]>array[j+1])
				{temp=array[j];array[j]=array[j+1];array[j+1]=temp;}
	}