#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int ElemType;
typedef struct node
	{
		ElemType data;
		struct node *next;
	}QType;//链队中的结点
typedef struct qptr
	{
		QType *front;
		QType *rear;
	}LinkQue;//指向链队头尾结点的指针

void InitQue(LinkQue *q)
	{	

		QType *p=(QType *)malloc(sizeof(QType));//初始化构建一个为NULL的头结点，使front指针变量时刻都指向当前队头结点的前一个位置
		q->front=p;
		q->rear=p;//初始时队列为空front和rear都指向单链表的头结点p，头结点为空
		p->next=NULL;
	}
void InQue(LinkQue *q,ElemType data)
	{
		QType *s=(QType *)malloc(sizeof(QType));
		if(s!=NULL)
			{
				s->data=data;
				s->next=NULL;
				q->rear->next=s;
				q->rear=s;
			}		
	}
ElemType OutQue(LinkQue *q,ElemType data)
	{
		QType *temp=q->front->next;
		if(q->front==q->rear)//队列为空的条件是front==rear
			{
				printf("链队为空!\n");
				return -1;
			}
				
		if(temp->data!=data)
			{
				printf("请遵循出队原理:先入先出\n");
				return -1;
			}
		else
			if(temp->next!=NULL)
				{
					data=temp->data;
					q->front->next=temp->next;
					free(temp);//temp始终指向要出队的那个结点，直到队尾结点的指针域为空
					return data;
				}
			else
				{
					data=temp->data;
					q->rear=q->front;
					free(temp);
					return data;
				}
	}
void PrintQue(LinkQue *q)
	{
		QType *print=q->front;//print指向了空着的头结点
		if(q->front==q->rear)
			printf("链队为空!");
		else			
			while(print->next!=NULL)//从头结点起依次往下一个结点遍历，直到到达最后一个结点指针域为空
				{
					print=print->next;
					printf("%-5d",print->data);
				}
		printf("\n");
	}
int main()
	{
		int i,number,return_value;
		LinkQue *queue=(LinkQue *)malloc(sizeof(LinkQue));//定义性声明一个指向头尾指针的指针变量，并且动态的分配空间
		InitQue(queue);
		printf("请随机输入10个数，进行入队!\n");
		for(i=0;i<10;i++)
			{
				scanf("%d",&number);
				InQue(queue,number);
			}
		printf("请输入要出队的值:");
		scanf("%d",&number);
		return_value=OutQue(queue,number);
		if(return_value!=-1)
			printf("出队的值是:%d\n",return_value);
		else
			printf("出队的值有误，无法出队!\n");
		printf("\n将依次输出现存链队结点的值...\n");
		PrintQue(queue);
		return 0;
	}
