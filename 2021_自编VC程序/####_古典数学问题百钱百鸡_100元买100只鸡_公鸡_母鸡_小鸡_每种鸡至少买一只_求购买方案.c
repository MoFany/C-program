#include<stdio.h>
int main()
	{
		int money=100,i,j,k,top=1;
		for(i=1;i<money/5;i++)
			for(j=1;j<100;j++)
				for(k=3;k<100;k+=3)
					if(i*5+j*3+k/3==money && i+j+k==100)
							printf("100元买100只鸡方案(%d):\n公鸡%d只\n母鸡%d只\n小鸡%d只\n",top++,i,j,k);
		return 0;
	}