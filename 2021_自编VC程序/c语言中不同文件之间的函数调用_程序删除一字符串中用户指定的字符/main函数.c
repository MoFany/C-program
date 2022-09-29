#include<stdio.h>
int main()
	{
	extern char enter_charater(char str[]);
	extern void delete_charater(char str[],char ch);
	char str[1000];	
	delete_charater(str,enter_charater(str));
	return 0;
	}
