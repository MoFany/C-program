#include<stdio.h>
int main()
	{
	void pointer_reverse(int *p,int n);
	int array[10],*pointer_1,i;
	pointer_1=array;
	printf("��������������array��10��Ԫ�أ�");
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);
	printf("�����ʱδ���õ�array����Ԫ�أ�");
	for(i=0;i<10;i++)
		printf("%2d",array[i]);
	printf("\narray����Ԫ�ط������Ϊ��");
	pointer_reverse(pointer_1,10);//��ָ�������Ϊ�������õ�ʵ��
	for(i=0;i<10;i++)
		printf("%2d",array[i]);
	printf("\n");
	return 0;
	}
void pointer_reverse(int *p,int n)//�β�*p�൱��ָ�볣��
	{
	int *p1,*i,*j,m=(n-1)/2,temp;//m=4:0~4���������
	i=p;//i�ĵ�ǰָ���ָ�����pһ��*p=&a[0];
	j=p+n-1;//�ȼ��ڣ�j=(a+9);--j=(a+n-1);
	p1=p+m;//�ȼ��ڣ�p1=(a+4);--p1=(a+m);
	for(;i<=p1;i++,j--)
		{temp=*i;*i=*j;*j=temp;}//��������������������Ԫ�ص����һ��Ԫ�����һ��Ԫ�ؽ�����
	}
