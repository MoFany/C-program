#include<stdio.h>
int main()
	{
	int a[10],i;
	int *array[10]={(a+0),(a+1),(a+2),(a+3),(a+4),(a+5),(a+6),(a+7),(a+8),(a+9)};
//ָ�������е�ÿһ��Ԫ�ض���һ��ָ�����,ʹָ������srray�е�ÿ��Ԫ�ض�ָ��a�����ж�ӦԪ�صĵ�ַ��
	int **pointer;
//ָ��ָ�������ݵ�ָ��������ֽ�Ϊ:itn *��* pointer
	printf("���������������10��Ԫ��:");
	for(i=0;i<10;i++)
		scanf("%d",a+i);

	printf("����ָ��ָ�����ݵ�ָ��������10��Ԫ��:");
	for(i=0;i<10;i++)
		{pointer=array+i;printf("%d ",**pointer);}
//��*pointer������Ϊָ������arrayԪ�ص�ֵ(��ַ),˫**pΪָ������arrayԪ��ָ������a�ж�ӦԪ�ص�ַָ���Ԫ��ֵ
	printf("\n");
	return 0;
	}
