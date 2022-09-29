char enter_charater(char str[1000])
	{
	char c;
	printf("Please enter charater string:");
	gets(str);
	printf("Please enter delete charater:");
	scanf("%c",&c);
	return(c);
	}
