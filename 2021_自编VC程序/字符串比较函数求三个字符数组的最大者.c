#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],str3[20];
	gets(str1);
	gets(str2);
	gets(str3);

	if(strcmp(str1,str2)>0)		
		if(strcmp(str1,str3)>0)
			{puts("max=str1");
			if(strcmp(str1,str2)==0) puts("str1==str2");
			if(strcmp(str1,str3)==0) puts("str1==str3");}
		else
			{puts("max=str3");
			if(strcmp(str1,str3)==0) puts("str3==str1");		
			if(strcmp(str2,str3)==0) puts("str3==str2");}			
	else
		if(strcmp(str2,str3)>0)
			{puts("max=str2");
			if(strcmp(str1,str2)==0) puts("str2==str1");
			if(strcmp(str2,str3)==0) puts("str2==str3");}
		else
			{puts("max=str3");
			if(strcmp(str1,str3)==0) puts("str3==str1");		
			if(strcmp(str2,str3)==0) puts("str3==str2");}
return 0;
}