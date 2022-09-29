#include<stdio.h>
#define TRUE 1
#define FALSE 0
int main()
	{
		int temp;
		#ifdef TRUE
			temp=TRUE;
		#else
			temp=FALSE;
		#endif
			printf("temp=%d\n",temp);
		return 0;
	}