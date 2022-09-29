#include<stdio.h>
int main()
	{
		int base=10;
		int* p=&base;
		int** q=&p;
		int*** r=&q;
		int**** s=&r;
		printf("现在有:\nint base=10,*p,**q,***r,****s;\np=&base\nq=&p\nr=&q\ns=&r\n\n");

		printf("变量base的值(数值)为:%d\n",base);
		printf("base的地址:%p---base的值:%d\n",&base,base);
		printf("&base==%p-------普通变量base自身的地址!\n\n",&base);

		printf("p==%p-----------base的地址\n",p);//指针就是地址,指针变量的值是一个地址
		printf("*p==%p==%d------base的值\n",*p,*p);
		printf("p的地址:%p------p的值:%p\n",&p,p);
		printf("&p==%p----------指针变量p自身的地址!\n\n",&p);

		printf("q==%p-----------p的地址\n",q);
		printf("*q==%p----------base地的址\n",*q);
		printf("**q==%p==%d-----base的值\n",**q,**q);
		printf("q的地址:%p------q的值:%p\n",&q,q);
		printf("&q==%p----------指针变量q自身的地址!\n\n",&q);
		
		printf("r==%p-----------q的地址\n",r);
		printf("*r==%p----------p的地址\n",*r);
		printf("**r==%p---------base的地址\n",**r);
		printf("***r==%p==%d----base的值\n",***r,***r);//指针变量加上最后一个*号为取最终值或数据
		printf("r的地址:%p------r的值:%p\n",&r,r);
		printf("&r==%p----------指针变量r自身的地址!\n\n",&r);

		printf("s==%p-----------r的地址\n",s);
		printf("*s==%p----------q的地址\n",*s);
		printf("**s==%p---------p的地址\n",**s);
		printf("***s==%p--------base的地址\n",***s);
		printf("****s==%p==%d---base的值\n",****s,****s);
		printf("s的地址:%p------s的值:%p\n",&s,s);
		printf("&s==%p----------指针变量s自身的地址!\n",&s);
		return 0;
	}
