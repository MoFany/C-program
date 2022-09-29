#include<stdio.h>
int main()
	{
		void Insert(int a[],int n,int b);
		int a[11]={1,2,3,4,5,6,7,8,9,10},b,n,i;
		printf("please enter b and n:");
		scanf("%d%d",&b,&n);
		if(n-1>=0 && n-1<11)
		{	
			Insert(a,n,b);
			for(i=0;i<11;i++)
				printf("a[%d]=%d\n",i,a[i]);
		}
		else
			printf("Can't insert!Error:n!\n");
		return 0;
	}
void Insert(int a[],int n,int b)
	{
		int temp_1,temp_2,i;
		temp_2=a[n-1];
		a[n-1]=b;
		for(i=n;i<11;i++)
			{
				temp_1=temp_2;
				temp_2=a[i];
				a[i]=temp_1;
			}
	}