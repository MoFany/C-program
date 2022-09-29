#include<stdio.h>
#include<stdlib.h>//开辟内存的动态分配函数头文件
//#include<malloc.h>
#define LEN sizeof(struct student)//宏定义一个常量，数值为求字节运算符sizeof的值
struct student
	{
	int num;
	char name[20];
	float score;
	struct student *next;//指针域:指针变量next指向下一个结点的数据域;上一个结点的指针域指向下一结点的数据域 
	};
int n;//定义一个全局变量n
struct student *creat(viod)//定义一个返回值为struct student类型的指针函数
	{
	struct student *head;//定义头指针head
	struct student *p1,*p2;//定义两个指向struct student类型的指针变量
	n=0;
	printf("sizeof测结构体类型struct student的字节长度:%d字节!\n",sizeof(struct student));
	printf("输入学生学号姓名及成绩!\n");
	p1=p2=(struct student *)malloc(LEN);//初始时为指针变量p1，p2开辟同一存储单元，属于动态分配内存单元
	scanf("%d%s%f",&p1->num,p1->name,&p1->score);
	head=NULL;
	while(p1->num!=0)//如果指向struct student类型的指针变量p1指向的结构体成员num的当前值不为0时,继续执行当型循环;否则p1->num==0时结束循环,输入为0时结束
		{
		n=n+1;
		if(n==1)
			head=p1;//头指针指向指针变量p1的当前值，指针变量的值是地址
		else 
			p2->next=p1;//指针变量p1指向指针变量p2所指向的指针域
		p2=p1;//指针变量p2指向指针变量p1当前的地址
		p1=(struct student *)malloc(LEN);//为指针p1开辟新的内存单元
		scanf("%d%s%f",&p1->num,p1->name,&p1->score);//&pt->num等价于&(*pt).num
		}
	p2->next=NULL;//尾结点的指针域指向位NULL(空)
	return(head);//返回当前头结点的地址作为函数值
	}
int main()
	{
	struct student *pt;//定义一个指向结构体struct student类型的指针变量
	pt=creat();//函数调用
	printf("\n学号:%d\n姓名:%s\n成绩:%0.2f\n",pt->num,pt->name,pt->score);//pt->num等价于(*pt).num
	return 0;
	}