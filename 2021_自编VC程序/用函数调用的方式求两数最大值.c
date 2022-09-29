#include"stdio.h"
//定义主函数
int main()
{
int max(int x,int y);
int a,b,c;
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("max=%d\n",c);
return 0;
}
//求两个整数的较大者的max函数
int max(int x,int y)
{
int z;
if(x>y)z=x;
else z=y;
return(z);
}
