#include<stdio.h>
int main()
{
	float sum,a=2,b=1;
	int i;
	sum=a/b;
	for(i=1;i<20;i++)
		{
			
			a=a+b;
			b=a-b;
			sum=sum+a/b;
		}
	printf("SUM=%.2f\n",sum);
	return 0;
}
/*int main()//----------------------------方法2:利用Fibonacci数列进行计算:2/1,3/2,5/3,8/5,13/8,21/13……求该数列前20项的和
	{
	float a[20]={2,3},b[20]={1,2},sum;
	int i;
	sum=a[0]/b[0]+a[1]/b[1];
	for(i=2;i<20;i++)
		{
		a[i]=a[i-2]+a[i-1];
		b[i]=b[i-2]+b[i-1];
		sum=sum+a[i]/b[i];
		}
	printf("SUM=%.2f\n",sum);
	return 0;
	}*/
