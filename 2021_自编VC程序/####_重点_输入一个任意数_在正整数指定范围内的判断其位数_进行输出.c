#include<stdio.h>
#define MaxSize 1000000000//�����������
#define MaxDigit 10//���������Ӧ��λ��
int main()
{
	int number,i,j=0,k;
	printf("������һ��������(number):");
	scanf("%d",&number);
	if(number<=0 || MaxSize/number==0)
	{
		printf("����:(number)����ָ����Χ!\n");
		return 0;
	}
	for(i=MaxSize;i>=1;i/=10)
		if(number/i%10==0)
			j++;
		else//ԭ��:ȡ��λ��λλ�������λ����ȥ��λ���ŵ�λ��
			break;
	k=MaxDigit-j;
	printf("������%d��һ��%dλ��!\n",number,k);
	return 0;
}