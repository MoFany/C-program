#include<stdio.h>
int main()
	{
	float average(int *p);
	void search(int (*p)[4]);
	int a[3][4],i;
	int *pointer_1;
	printf("������λͬѧ���ſγ̳ɼ���");
	for(i=0;i<3;i++)
		for(pointer_1=*(a+i);pointer_1<a[i]+4;pointer_1++)
			scanf("%d",pointer_1);
	printf("��λͬѧ����ƽ���ɼ�Ϊ��");
	printf("%0.2f\n",average(*a));
	search(a);
	return 0;
	}
float average(int *p)
	{
	int *p_end,sum=0;
	float aver;
	p_end=p+11;
	for(;p<=p_end;p++)
		sum=sum+(*p);
	aver=(float)sum/12;
	return(aver);
	}
void search(int (*p)[4])
	{
	int i,n;
	printf("����һλѧ����ţ�");
	scanf("%d",&n);
	printf("��%dλͬѧ���ĿƳɼ��ֱ�Ϊ��",n);
	for(i=0;i<4;i++)
		printf("%5d",*(*(p+n)+i));
	printf("\n");
	}