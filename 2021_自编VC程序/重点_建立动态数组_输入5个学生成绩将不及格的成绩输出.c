#include<stdio.h>
#include<stdlib.h>
int main()
	{
	void check(int *);//�����������β�Ϊָ��int���ݵ�ָ�����
	int *p1,i;
	p1=(int *)malloc(5 *sizeof(int));//���ٶ�̬�ڴ���(��̬�洢��)
	for(i=0;i<5;i++)
		scanf("%d",p1+i);//����ַ��ֵ����̬����
	check(p1);//��������
	return 0;
	}
void check(int *p)//���屻���������β�Ϊָ��int���ݵ�ָ�����
	{
	int i;
	printf("They are fail:");
	for(i=0;i<5;i++)
		if (p[i]<60)
			printf("%d ",p[i]);//�������±귨��0�������Ԫ����С��60��Ԫ��ֵ
	printf("\n");
	}
