#include"stdio.h"
void main()
{
int n,i;
scanf("%d",&n);
if(n>=3)
	for(i=2;i<n;i++)
	{
		if(n%i==0)		
			{printf("%d��������\n",n);break;}		
	}
	if(i==n)//�ж�Ŀǰi��ֵ
		printf("%d������\n",n);

else
	 printf("��������ڻ����3��������\n");
}