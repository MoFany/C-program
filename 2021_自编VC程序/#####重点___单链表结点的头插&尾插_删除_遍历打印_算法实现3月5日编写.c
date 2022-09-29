#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int ElemType;//��int��������Ϊ��һ�������û��Զ�������ElemType

typedef struct Node
{
	ElemType data;
	struct Node *next;
}Node;//��������Ľṹ�壬������ΪNode

Node *InitList()//��ʼ��
{
	Node *L=(Node *)malloc(sizeof(Node));
	L->next=NULL;
	return L;
}

void HeadInsert(Node *L,ElemType data)//ͷ�巨
{
	Node *node=(Node *)malloc(sizeof(Node));
	node->data=data;
	node->next=L->next;
	L->next=node;
}

void TailInsert(Node *L,ElemType data)//β�巨
{
	Node *node_1=L,*node_2=NULL;
	while(node_1->next)
		node_1=node_1->next;
	node_2=(Node *)malloc(sizeof(Node));//�¿���һ�����
	node_2->data=data;
	node_2->next=NULL;
	node_1->next=node_2;
}

int Delete(Node *L,ElemType data)//ɾ��һ��ָ���Ľ��____����1
{
	Node *precedingNode=L;
	Node *node=L->next;
	while(node)
	{
		if(node->data==data)
		{
			precedingNode->next=node->next;
			free(node);
			return TRUE;
		}
		precedingNode=node;
		node=node->next;
	}
	return FALSE;
}
void DelNode(Node *L,ElemType data)//ɾ��һ��ָ���Ľ��____����2____���㷨ֻ��ͷ��㲻��ɾ��
{
	Node *preNode=L,*node=NULL;
	while(preNode->next!=NULL && preNode->next->data!=data)//��Ҫ�жϵ�ǰ���ĺ�̽��Ϊ��Ϊ�գ���Ϊ&&��������Ϊ�پͲ����ж��ұ�
		preNode=preNode->next;
	if(preNode->next==NULL)
	{
		printf("Without this value!\n");
		return ;
	}
	node=preNode->next;//ָ��ǰpreNodeָ��ָ�������һ�����
	if(node->next==NULL)//���Ҫɾ���Ľ��nodeָ��β���
	{
		preNode->next=NULL;
		free(node);
		return ;
	}
	else//����:ɾ���Ľ��node����β���
	{
		preNode->next=node->next;
		free(node);
		return ;
	}			
}

void PrintList(Node *L)//һ���������Ľ��ֵ
{
	Node *node=L->next;
	if(node==NULL)
	{
		printf("Link list is NULL!\nPelease enter values!\n");
		return;//����һ����ֵ����������������ǰ�����ú������������䲻ִ��
	}
	
	while(node)
	{
		printf("node->data=%d\n",node->data);
		node=node->next;
	}
}

int main()
{
	Node *L=InitList();//����������������L
	//PrintList(L);�����ų�ʼ������ж������Ƿ�Ϊ�գ��Լ��ж�����������ȷ��
	ElemType array[5],i,length,del;
	printf("Pelease enter array values:\n");
	for(i=0;i<5;i++)
		scanf("%d",&array[i]);
	length=sizeof(array)/sizeof(array[0]);
	for(i=0;i<length;i++)
		if(array[i]%2==0)
			HeadInsert(L,array[i]);//ż��ͷ��
		else
			if(array[i]%2!=0)
				TailInsert(L,array[i]);//����β��
	printf("------------------\n");
	PrintList(L);
	printf("------------------\n");
	printf("Delete value is:");
	scanf("%d",&del);
	DelNode(L,del);
	PrintList(L);
	return 0;
}