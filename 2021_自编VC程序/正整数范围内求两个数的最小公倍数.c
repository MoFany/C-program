#include<stdio.h>
int main()
	{
	int a,b,i,j,k=0,c[100];//c[100]���ܳ���������ķ�Χ����
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a>b?a:b);j++)
			if(((a>b?a:b)*i)==((a<b?a:b)*j))
				//printf("%d ",((a>b?a:b)*i));//a*b��Χ�ڣ��󹫱���
				c[k++]=((a>b?a:b)*i);
	printf("%d\n",c[0]);
	return 0;
	}
