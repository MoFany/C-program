#include<stdio.h>
int main()
{
	char c;
	for(;c!='\n';)
	{
	c=getchar();
	if((c>=97 && c<=122)||(c>=65 && c<=90))
		if(c>=87 && c<=90 || c>=119 && c<=122) c=c-22;
		else
			c=c+4;
	printf("%c",c);
	}
	printf("\n");
	return 0;
}
