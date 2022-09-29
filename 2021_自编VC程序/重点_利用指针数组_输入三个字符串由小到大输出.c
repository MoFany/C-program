#include<stdio.h>
#include<string.h>
int main()
	{
	char str1[100],str2[100],str3[100];//输入的字符串长度不能超过数组的定义范围
	int i,j;
	char *temp;//定义一个临时指针来改变指针数组各个元素的而指向
	char *p[3];//定义一个指向字符型数据且包含三个元素的指针数组
	p[0]=str1;
	p[1]=str2;
	p[2]=str3;//给指针数组中的每个指针变量元素逐个初始化，让每个元素指向一个char型一维数组首元素的地址
	printf("1.输入三个字符串!\n");
	gets(str1);
	gets(str2);
	gets(str3);//字符串输入函数
	printf("2.进行冒泡排序!\n");
	for(i=0;i<2;i++)
		for(j=0;j<2-i;j++)
			if(strcmp(p[j],p[j+1])>0)//字符串比较函数，前者与后者进行比较
			{temp=p[j];p[j]=p[j+1];p[j+1]=temp;}//通过改变指针数组元素的指向从而进行排序
	printf("3.排序后按字符串大小升序输出!\n");
	for(i=0;i<3;i++)
		printf("%s\n",p[i]);//按顺序将排序后的指针数组3个元素值以字符串方式进行输出
	return 0;
	}
