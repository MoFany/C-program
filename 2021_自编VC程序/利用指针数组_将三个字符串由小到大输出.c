#include<stdio.h>
#include<string.h>
int main()
	{
	int i,j;
	char *temp;
	char *p_str[3]={"How","Are","you"};
	printf("Sort!\n");
	for(i=0;i<2;i++)//Ã°ÅÝÅÅÐò·¨
		for(j=0;j<2-i;j++)
			if(strcmp(p_str[j],p_str[j+1])>0)
			{temp=p_str[j];p_str[j]=p_str[j+1];p_str[j+1]=temp;}
	printf("Output:\n");
	for(i=0;i<3;i++)
		printf("%s\n",p_str[i]);
	return 0;
	}
