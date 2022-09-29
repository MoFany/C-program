#include<stdio.h>

int main()
{
	int a[10],i,j,R,min,temp;
	printf("please Input!\n");
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	for(i=0;i<10;i++)
		{
			min=a[i];
			for(j=i+1;j<10;j++)
				if(min>a[j])
					{
						min=a[j];
						R=j;
					}
			if(min<a[i])
				{temp=a[i];a[i]=a[R];a[R]=temp;}
		}
	printf("Out put:");
	for(i=0;i<10;i++)
		printf("%3d",*(a+i));
	printf("\n");
}