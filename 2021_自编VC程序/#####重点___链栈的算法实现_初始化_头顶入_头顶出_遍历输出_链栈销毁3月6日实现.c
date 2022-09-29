#include<stdio.h>
#include<stdlib.h>
//#define TRUE 1
//#define FALSE 0
typedef int ElemType;
typedef struct stack
	{
		ElemType data;
		struct stack *next;
	}LinkStack;

LinkStack *InitStack()
	{
		LinkStack *lst;
		lst=NULL;
		return lst;
	}

LinkStack *Push(LinkStack *lst,ElemType data)
	{
		LinkStack *ls;
		ls=(LinkStack *)malloc(sizeof(LinkStack));
		ls->data=data;
		ls->next=lst;
		lst=ls;
		return lst;
	}

LinkStack *Pop(LinkStack *lst,ElemType data)//ԭ���������������ȳ�,�ϸ���ѭ
	{
		LinkStack *ls=lst;
		if(lst==NULL)
		{
			printf("Stack Empty!\n");
			return lst;
		}
		else
			if(ls->data==data)
			{
				data=ls->data;
				lst=ls->next;
				free(ls);
				return lst;
			}
			else
				{
					printf("Wrong stack order!\n");//������ԭ���ջ���ᱨ����ʾ
					return lst;
				}
	}

void PrintStack(LinkStack *lst)
	{
		LinkStack *ls=lst;
		if(ls==NULL)
		{
			printf("Stack Empty!\n");
			return ;
		}
		while(ls!=NULL)
		{
			printf("LinkStack->data=%d\n",ls->data);
			ls=ls->next;
		}
	}
	
LinkStack *Destroy(LinkStack *lst)
{
	LinkStack *preceding=lst,*p;
	if(preceding==NULL)
		{
			printf("Stack Empty!\n");
			return preceding;
		}
	p=preceding->next;
	while(p!=NULL)
	{
		free(preceding);
		preceding=p;
		p=p->next;
	}
	free(preceding);
	if(p==NULL)
		printf("Successful destruction!\n");
	return p;
}

int main()
{
	//int data;
	LinkStack *st=InitStack();
	st=Push(st,5);
	st=Push(st,4);
	st=Push(st,3);
	st=Push(st,2);
	st=Push(st,1);
	st=Push(st,0);
	PrintStack(st);
	printf("----------------\n");
	st=Pop(st,0);
	PrintStack(st);
	printf("----------------\n");
	st=Destroy(st);
	PrintStack(st);
	return 0;
}