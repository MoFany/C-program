void Max_common_factor(int a,int b)
	{
	int i,j,k=0;
	printf("Common factor:");
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a<b?a:b);j++)
			if((a>b?a:b)%i==0 && (a<b?a:b)%j==0)
				if(i==j)
					if(i>k)
					{k=i;printf("%4d",i);}//输出所有公因数(公约数);
	printf("\nMaximum common factor:%2d\n",k);//输出最大公因数(公约数);
	}

