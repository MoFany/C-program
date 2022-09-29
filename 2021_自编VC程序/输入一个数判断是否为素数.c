#include"stdio.h"
void main()
{
int n,i;
scanf("%d",&n);
if(n>=3)
	for(i=2;i<n;i++)
	{
		if(n%i==0)		
			{printf("%d不是素数\n",n);break;}		
	}
	if(i==n)//判断目前i的值
		printf("%d是素数\n",n);

else
	 printf("请输入大于或等于3的正整数\n");
}