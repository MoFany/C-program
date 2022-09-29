#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define MaxSize 100
typedef int ElemType;

typedef struct stack
	{
		ElemType data[MaxSize];
		ElemType top;
	}SqStack;

ElemType InitStack(SqStack *st)
	{
		return(st->top=-1);
	}

ElemType Push(SqStack *st,ElemType data)
	{
		if(st->top==MaxSize-1)
		{
			printf("Stack Full!\n");
			return FALSE;
		}
		else
		{
			st->top++;
			st->data[st->top]=data;
			return TRUE;
		}
	}

ElemType Pop(SqStack *st,ElemType data)//原理：先入后出，后入先出,严格遵循
	{
		if(st->top==-1)
		{
			printf("Stack Empty!\n");
			return FALSE;
		}
		else
			if(st->data[st->top]==data)
			{
				data=st->data[st->top];
				st->top--;
				return TRUE;
			}
			else
				{
					printf("Wrong stack order!\n");
					return FALSE;
				}
	}

void PrintStack(SqStack *st)
	{
		SqStack *s=st;
		int i=s->top;
		for(;i>=0;i--)
			printf("st->data[%d]=%d\n",i,s->data[i]);
	}	

int main()
{
	//int data;
	SqStack *st=(SqStack *)malloc(sizeof(SqStack));//一定要分配空间
	st->top=InitStack(st);
	Push(st,1);
	Push(st,2);
	Push(st,3);
	Push(st,4);
	PrintStack(st);
	printf("----------------\n");
	Pop(st,4);
	PrintStack(st);
	printf("----------------\n");
	Pop(st,3);
	PrintStack(st);
	printf("----------------\n");
	Pop(st,1);
	PrintStack(st);
	printf("----------------\n");
	Pop(st,2);
	PrintStack(st);
	return 0;
}