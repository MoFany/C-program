void Min_common_multiple(int a,int b)
	{
	int i,j,k=0,c[1000];
	for(i=1;i<=(a>b?a:b);i++)
		for(j=1;j<=(a>b?a:b);j++)
			if(((a>b?a:b)*i)==((a<b?a:b)*j))
				//printf("%d ",((a>b?a:b)*i));//a*b范围内，求公倍数
				c[k++]=((a>b?a:b)*i);
	printf("Least common multiple:%2d\n",c[0]);
	}
