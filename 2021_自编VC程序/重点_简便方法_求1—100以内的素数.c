#include<stdio.h>

int main()
{
	int i,j;//1��������;һ������1����Ȼ���У�����1���Լ��ⲻ������������
	for(i=1;i<=100;i++)
		{
			for(j=2;j<i;j++)
				if(i%j==0)
					break;
			if(i==j)
				printf("����:%d\n",i);
		}
	return 0;
}
