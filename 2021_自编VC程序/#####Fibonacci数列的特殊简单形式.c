#include<stdio.h>
int main()
	{
		double f1,f2,f3;
		int n,i;
		printf("请输入fibonacci数列的项数：");
		scanf("%d",&n);
		for(f1=f2=1,i=1;i<=n;i++)
		{
			if(i==1 || i==2)
			{
				printf("%.0lf\n",f1);
				continue;
			}
			f3=f1+f2;
			printf("%.0lf\n",f3);
			f1=f2;
			f2=f3;
		}
		return 0;
	}
