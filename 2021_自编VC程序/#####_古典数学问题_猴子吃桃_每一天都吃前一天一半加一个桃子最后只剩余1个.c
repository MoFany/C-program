#include<stdio.h>
int funcation(int day)
	{
		int temp=1;
		for(;day>0;day--)
			temp=(temp+1)*2;
		return temp;
	}
int main()
	{
		int day;
		printf("请输入剩余只有1个桃子所对应的天数:");
		scanf("%d",&day);
		printf("第1天一共摘了%d个桃子!\n",funcation(day));
		return 0;
	}