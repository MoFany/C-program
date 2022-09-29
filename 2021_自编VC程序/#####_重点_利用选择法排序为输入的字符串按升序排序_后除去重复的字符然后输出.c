#include<stdio.h>
#include<string.h>
void sort_delete(char *str)
	{
		char *p,*q,*temp,c;
		for(p=str;*p!='\0';p++)
			{
				temp=p;//与temp!=p呼应
				for(q=p;*q!='\0';q++)
					if(*temp>*q)
							temp=q;
				if(temp!=p)//指针变量temp的指向不是p时执行以下语句
					{
						c=*temp;
						*temp=*p;
						*p=c;
					}
			}
		for(p=str;*p!='\0';p++)
			{
				for(q=p;*p==*q;q++)
					;//空语句
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
