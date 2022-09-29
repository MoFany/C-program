void delete_charater(char str[],char ch)
	{
	extern void print_charater(char str[]);
	int i,j;	
	for(j=i=0;str[i]!='\0';i++)
		if(str[i]!=ch)
			str[j++]=str[i];
	str[j]='\0';
	print_charater(str);
	}
