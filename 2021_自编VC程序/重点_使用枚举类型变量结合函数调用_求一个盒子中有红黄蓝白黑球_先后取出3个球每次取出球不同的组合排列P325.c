#include<stdio.h>
enum C_ball
	{red,yellow,blue,white,black};//声明枚举类型
int main()
	{
		void print(enum C_ball Loop);//函数声明
		enum C_ball i,j,k,loop;//main函数中定义枚举类型的变量，其值就是枚举类型中用户指定的某些元素值
		int n;
		for(n=0,i=red;i<=black;i++)//枚举变量在for循环中的使用
			for(j=red;j<=black;j++)
				if(i!=j)
					{
						for(k=red;k<=black;k++)
							if((k!=i)&&(k!=j))
								{
								n++;
								printf("The group %-2d:",n);
								for(loop=1;loop<4;loop++)
									if(loop==1)	print(i);
										else	if(loop==2)	print(j);
											else	if(loop==3)	print(k);//函数调用
								printf("\n");
								}
					}
		printf("\nTotal:%d\n",n);
		return 0;
	}
void print(enum C_ball Loop)//以枚举类型变量做函数形参
	{
	switch(Loop)//switch多分支选择结构
		{
		case red: printf("%8s","red");break;
		case yellow: printf("%8s","yellow");break;
		case blue: printf("%8s","blue");break;
		case white: printf("%8s","white");break;
		case black: printf("%8s","black");break;
		}
	}