#include<stdio.h>
int main()
	{
		int base=10;
		int* p=&base;
		int** q=&p;
		int*** r=&q;
		int**** s=&r;
		printf("������:\nint base=10,*p,**q,***r,****s;\np=&base\nq=&p\nr=&q\ns=&r\n\n");

		printf("����base��ֵ(��ֵ)Ϊ:%d\n",base);
		printf("base�ĵ�ַ:%p---base��ֵ:%d\n",&base,base);
		printf("&base==%p-------��ͨ����base����ĵ�ַ!\n\n",&base);

		printf("p==%p-----------base�ĵ�ַ\n",p);//ָ����ǵ�ַ,ָ�������ֵ��һ����ַ
		printf("*p==%p==%d------base��ֵ\n",*p,*p);
		printf("p�ĵ�ַ:%p------p��ֵ:%p\n",&p,p);
		printf("&p==%p----------ָ�����p����ĵ�ַ!\n\n",&p);

		printf("q==%p-----------p�ĵ�ַ\n",q);
		printf("*q==%p----------base�ص�ַ\n",*q);
		printf("**q==%p==%d-----base��ֵ\n",**q,**q);
		printf("q�ĵ�ַ:%p------q��ֵ:%p\n",&q,q);
		printf("&q==%p----------ָ�����q����ĵ�ַ!\n\n",&q);
		
		printf("r==%p-----------q�ĵ�ַ\n",r);
		printf("*r==%p----------p�ĵ�ַ\n",*r);
		printf("**r==%p---------base�ĵ�ַ\n",**r);
		printf("***r==%p==%d----base��ֵ\n",***r,***r);//ָ������������һ��*��Ϊȡ����ֵ������
		printf("r�ĵ�ַ:%p------r��ֵ:%p\n",&r,r);
		printf("&r==%p----------ָ�����r����ĵ�ַ!\n\n",&r);

		printf("s==%p-----------r�ĵ�ַ\n",s);
		printf("*s==%p----------q�ĵ�ַ\n",*s);
		printf("**s==%p---------p�ĵ�ַ\n",**s);
		printf("***s==%p--------base�ĵ�ַ\n",***s);
		printf("****s==%p==%d---base��ֵ\n",****s,****s);
		printf("s�ĵ�ַ:%p------s��ֵ:%p\n",&s,s);
		printf("&s==%p----------ָ�����s����ĵ�ַ!\n",&s);
		return 0;
	}
