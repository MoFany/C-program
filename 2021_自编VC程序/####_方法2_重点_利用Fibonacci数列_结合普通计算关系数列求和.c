#include<stdio.h>
int main()
{
	float a=2,b=1,sum=0,temp;
	int i;
	for(i=0;i<20;i++)
	{
		temp=a;
		sum=sum+a/b;
		a=a+b;
		b=temp;
		printf("%d/%d\n",(int)a,(int)b);
	}
	printf("SUM=%f\n",sum);
	return 0;
}
/*int main()//----------------------------方法2:利用Fibonacci数列进行计算:2/1,3/2,5/3,8/5,13/8,21/13……求该数列前20项的和
{
	int a[20]={2,3},b[20]={1,2},i;
	float sum=0;
	for(i=2;i<20;i++)
	{
		a[i]=a[i-2]+a[i-1];
		b[i]=b[i-2]+b[i-1];
	}
	for(i=0;i<20;i++)
	{
		sum=sum+(float)a[i]/(float)b[i];
		printf("%d/%d\n",a[i],b[i]);
	}
	printf("SUM=%f\n",sum);
	return 0;
}*/