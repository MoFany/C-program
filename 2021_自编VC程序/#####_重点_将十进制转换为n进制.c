#include<stdio.h>
int main()
{
	int i=0,base,D_num,j,num[20],n;
	printf("��������Ҫת����ʮ������:");
	scanf("%d",&D_num);
	n=D_num;
	printf("���������ת���Ļ���:");
	scanf("%d",&base);
	while(D_num!=0)
		{
			num[i++]=D_num%base;
			D_num=D_num/base;
		}
	printf("ʮ������%dת��Ϊ%d������Ϊ:",n,base);
	for(j=i-1;j>=0;j--)//��ȥ���һ��i++��ֵ
		printf("%d",num[j]);
	putchar(10);
	return 0;
}