#include<stdio.h>
#include<string.h>
void sort_delete(char *str)
	{
		char *p,*q,*temp,c;
		for(p=str;*p!='\0';p++)
			{
				temp=p;//��temp!=p��Ӧ
				for(q=p;*q!='\0';q++)
					if(*temp>*q)
							temp=q;
				if(temp!=p)//ָ�����temp��ָ����pʱִ���������
					{
						c=*temp;
						*temp=*p;
						*p=c;
					}
			}
		for(p=str;*p!='\0';p++)
			{
				for(q=p;*p==*q;q++)
					;//�����
				strcpy(p+1,q);
			}	
	}

int main()
	{
		char str[100];
		printf("Please input a string:");
		gets(str);
		printf("Output a string:");
		sort_delete(str);
		puts(str);
		return 0;
	}
