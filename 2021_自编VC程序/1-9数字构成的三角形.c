#include<stdio.h>
int main()
	{
		int i,j,k,l;
		for(i=1;i<=9;i++)
			{
				for(j=0;j<9-i;j++)
					printf(" ");
				for(k=1;k<=i;k++)
					printf("%d",k);
				for(l=i-1;l>0;l--)
					printf("%d",l);
				printf("\n");
			}
		return 0;
	}
/*int main()
	{
		int i,s,sum=0;
		for(i=0;i<99;i+=2)
			{
			s=(i+1)*(i+2)*(i+3);
			sum=sum+s;
			}
		printf("SUM=%d\n",sum);
		return 0;
	}
int main()
	{
		int a[101],i,s,sum=0;
		for(i=0;i<101;i++)
			a[i]=i+1;
		for(i=0;i<99;i+=2)
			{
			s=a[i]*a[i+1]*a[i+2];
			sum=sum+s;
			}
		printf("SUM=%d\n",sum);
		return 0;
	}
int main()
	{
		int i,max;
		for(i=1;i<100;i++)
			if(i%17==0)
				max=i;
		printf("MAX=%d\n",max);
		return 0;
	}
int main()
	{
		int a,g,s,b,q,w,O;
		printf("请随机输入一个不超过五位数!\n");
		scanf("%d",&a);
		if(a<100000 && a>=0)
			{
			g=a%10;
			s=a%100/10;
			b=a%1000/100;
			q=a%10000/1000;
			w=a/10000;
			O=g*1+s*8+b*8*8+q*8*8*8+w*8*8*8*8;
			printf("八进制转换十进制:(%d)O=(%d)D\n",a,O);
			}
		else
			printf("输入的数%d超过0~99999表示的范围，出现错误!\n",a);
		return 0;
	}

int main()
	{
		int a,g,s,q,w;
		printf("请随机输入一个五位数!\n");
		scanf("%d",&a);
		g=a%10;
		s=a%100/10;
		q=a%10000/1000;
		w=a/10000;
		if(g==w && s==q)
			printf("数%d是回文数!\n",a);
		else
			printf("数%d不是回文数!\n",a);
		return 0;
	}
int main()
	{
		int a[5],i,loop=0,L=0;
		printf("请随机输入一个五位数!\n");
		for(i=0;i<5;i++)
			scanf("%d",&a[i]);
		for(i=0;i<5;i++)
			if(a[i]>=10 || a[i]<0)
				{
					L++;
					break;
				}
		if(L==0)
			{
				for(i=0;i<2;i++)
					if(a[i]!=a[4-i])
						{	loop++;
							break;
						}
				for(i=0;i<5;i++)
					printf("%d",a[i]);
				if(loop==1)
					printf(":该数不是一个回文数!\n");
				else
					printf(":该数是一个回文数!\n");
			}
					
		else
			printf("输入的数有误!请重新输入!\n");
		return 0;
	}
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
	}*/