#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int ElemType;
typedef struct node
	{
		ElemType data;
		struct node *next;
	}QType;//�����еĽ��
typedef struct qptr
	{
		QType *front;
		QType *rear;
	}LinkQue;//ָ������ͷβ����ָ��

void InitQue(LinkQue *q)
	{	

		QType *p=(QType *)malloc(sizeof(QType));//��ʼ������һ��ΪNULL��ͷ��㣬ʹfrontָ�����ʱ�̶�ָ��ǰ��ͷ����ǰһ��λ��
		q->front=p;
		q->rear=p;//��ʼʱ����Ϊ��front��rear��ָ�������ͷ���p��ͷ���Ϊ��
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
		if(q->front==q->rear)//����Ϊ�յ�������front==rear
			{
				printf("����Ϊ��!\n");
				return -1;
			}
				
		if(temp->data!=data)
			{
				printf("����ѭ����ԭ��:�����ȳ�\n");
				return -1;
			}
		else
			if(temp->next!=NULL)
				{
					data=temp->data;
					q->front->next=temp->next;
					free(temp);//tempʼ��ָ��Ҫ���ӵ��Ǹ���㣬ֱ����β����ָ����Ϊ��
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
		QType *print=q->front;//printָ���˿��ŵ�ͷ���
		if(q->front==q->rear)
			printf("����Ϊ��!");
		else			
			while(print->next!=NULL)//��ͷ�������������һ����������ֱ���������һ�����ָ����Ϊ��
				{
					print=print->next;
					printf("%-5d",print->data);
				}
		printf("\n");
	}
int main()
	{
		int i,number,return_value;
		LinkQue *queue=(LinkQue *)malloc(sizeof(LinkQue));//����������һ��ָ��ͷβָ���ָ����������Ҷ�̬�ķ���ռ�
		InitQue(queue);
		printf("���������10�������������!\n");
		for(i=0;i<10;i++)
			{
				scanf("%d",&number);
				InQue(queue,number);
			}
		printf("������Ҫ���ӵ�ֵ:");
		scanf("%d",&number);
		return_value=OutQue(queue,number);
		if(return_value!=-1)
			printf("���ӵ�ֵ��:%d\n",return_value);
		else
			printf("���ӵ�ֵ�����޷�����!\n");
		printf("\n����������ִ����ӽ���ֵ...\n");
		PrintQue(queue);
		return 0;
	}
