#include<stdio.h>
int main()
{
	char str1[1000],c;
	int i,j;
	printf("Please enter charater string:");
	gets(str1);
	printf("Please enter delete charater:");
	scanf("%c",&c);
	for(j=i=0;str1[i]!='\0';i++)
		if(str1[i]!=c)
			str1[j++]=str1[i];
	str1[j]='\0';
	printf("%s\n",str1);
	return 0;
}
