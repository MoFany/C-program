#include<stdio.h>
int main()
	{
	int *score(int x,int (*p)[4]);
	int array[3][4],i,num;
	int *pointer_1,*pointer_2;
	printf("������3λͬѧ�ĿƵĳɼ���");
	for(i=0;i<3;i++)
		for(pointer_1=*(array+i);pointer_1<array[i]+4;pointer_1++)
			scanf("%d",pointer_1);
	printf("������һλͬѧ����ţ�");
	scanf("%d",&num);
	if(num==0 || num==1 || num==2)
		{
		pointer_2=score(num,array);//������ֵ����ַ����ָ�����pointer_2��ֵ
		printf("���Ϊ%d��ͬѧ�ĿƳɼ�Ϊ��",num);
		for(i=0;i<4;i++)
			printf("%d ",*(pointer_2+i));//��pointer_2�е�ַ��Ԫ��ָ���ֵ���
		printf("\n");
		}
	else
		printf("�Բ���!û�и�λͬѧ!\n");
	return 0;
	}
int *score(int x,int(*p)[4])//����һ������ֵΪָ��ĺ���
	{
	return(*(p+x));
	}

