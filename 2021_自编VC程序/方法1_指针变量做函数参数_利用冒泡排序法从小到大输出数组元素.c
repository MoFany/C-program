#include<stdio.h>
int main()
	{
	void sort(int *p);
	int array[10],*pointer_1,i;
	pointer_1=array;
	printf("����������array��10��Ԫ�أ�");
	for(i=0;i<10;i++)
		scanf("%d",(array+i));
	printf("��С�����������arrayԪ��Ϊ��");
	sort(pointer_1);
	for(pointer_1=array;pointer_1<array+10;pointer_1++)//���ָ�����pointer_1��Ӧ����Ԫ�ص�ַ��ָ���ֵ
		printf("%2d",*pointer_1);
	printf("\n");
	return 0;
	}
void sort(int *p)
	{
	int i,*j,temp;
	for(i=0;i<9;i++)//ð������
		for(j=p;j<(p+9-i);j++)//��ָ�����jÿ�ν�����ѭ���ĳ�ʼֵΪ��j=p=&array[0]
			if(*j>*(j+1))
			{temp=*j;*j=*(j+1);*(j+1)=temp;}
	}