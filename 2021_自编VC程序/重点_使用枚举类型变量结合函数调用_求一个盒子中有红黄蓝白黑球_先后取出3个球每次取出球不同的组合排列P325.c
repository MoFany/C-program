#include<stdio.h>
enum C_ball
	{red,yellow,blue,white,black};//����ö������
int main()
	{
		void print(enum C_ball Loop);//��������
		enum C_ball i,j,k,loop;//main�����ж���ö�����͵ı�������ֵ����ö���������û�ָ����ĳЩԪ��ֵ
		int n;
		for(n=0,i=red;i<=black;i++)//ö�ٱ�����forѭ���е�ʹ��
			for(j=red;j<=black;j++)
				if(i!=j)
					{
						for(k=red;k<=black;k++)
							if((k!=i)&&(k!=j))
								{
								n++;
								printf("The group %-2d:",n);
								for(loop=1;loop<4;loop++)
									if(loop==1)	print(i);
										else	if(loop==2)	print(j);
											else	if(loop==3)	print(k);//��������
								printf("\n");
								}
					}
		printf("\nTotal:%d\n",n);
		return 0;
	}
void print(enum C_ball Loop)//��ö�����ͱ����������β�
	{
	switch(Loop)//switch���֧ѡ��ṹ
		{
		case red: printf("%8s","red");break;
		case yellow: printf("%8s","yellow");break;
		case blue: printf("%8s","blue");break;
		case white: printf("%8s","white");break;
		case black: printf("%8s","black");break;
		}
	}