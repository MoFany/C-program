#include <stdio.h>
#include <stdlib.h>

struct Student
	{                       
		int num;
		float score;
		struct Student *prev;
		struct Student *next;
	};//�����ṹ�壨˫������ṹ�壩

struct Student *input();//�������뺯��
struct Student *insert(struct Student **stu, int m, char direc, struct Student *ins);//�������뺯��
void print(struct Student *stu);//�����������

int main()
	{
		struct Student *stud, in, *inser; //����ṹ��ָ�룬����Ľṹ�������ָ�����ṹ�������ָ��
		int insert_num;                   //����Ҫ����Ľ��ѧ��
		char dir;                         //����ǰ����ķ������
		stud=input();                     //�������뺯��
		print(stud);                      //���ȫ������
		printf("Please enter insert student info: ");      //����Ҫ�����ѧ�����ݣ�ѧ�źͳɼ���
		scanf("%d %f", &in.num, &in.score);
		getchar();
		inser=&in;                        //�ṹ�����ָ��ָ��in
		printf("Please enter insert num: ");               //����Ҫ�����ĸ�ѧ��
		scanf("%d", &insert_num);
		getchar();
		printf("Please enter F or B: ");                   //������Ҫ����ѧ��ǰ���Ǻ�F��ǰ�壬B�Ǻ�塣
		scanf("%c", &dir);
		getchar();
		stud=insert(&stud, insert_num, dir, inser);             //���ò��뺯�������ѷ���ֵhead��ֵ��stud 
		print(stud);
		return 0;
	}

struct Student *input()//���뺯��
	{
	struct Student *p1, *p2, *head;
	int n=0;
	p1=p2=(struct Student*)malloc(sizeof(struct Student));
	printf("Please enter No.%d student info: ", n+1);
	scanf("%d %f", &p1->num, &p1->score);
	getchar();
	head=NULL;
	while (p1->num!=0)
		{
		 n++;
		 if (n==1)
			{
				head=p1;
				p1->prev=NULL;
			}
		 else
			{
				p2->next=p1;
				p1->prev=p2;
			}
		 p2=p1;
		 p1=(struct Student*)malloc(sizeof(struct Student));
		 printf("Please enter No.%d student info: ",n+1);
		 scanf("%d %f", &p1->num, &p1->score);
		 getchar();
		}
	p2->next=NULL;
	return head;
	}

struct Student *insert(struct Student **stu, int m, char direc, struct Student *ins)//���뺯��
	{
	struct Student *p, *head;
	for(p=*stu,head=p;p!=NULL;p=p->next)
		{
		if (p->num==m)
			{
			if (direc=='F')
				{
				if (p==head)//��Ϊ��һ���ṹ������ 
					{
					ins->next=p;
					ins->prev=NULL;
					head->prev=ins;
					head=ins;
					}
				else
					{
					ins->prev=p->prev;
					p->prev->next=ins;
					ins->next=p;
					p->prev=ins;
					}
				}
			else 
				if (direc=='B')
				{
				if (p->next==NULL)//��Ϊ���һ���ṹ������ 
					{
					p->next=ins;
					ins->next=NULL;
					ins->prev=p;
					}
				else
					{
					ins->next=p->next;
					p->next=ins;
					ins->prev=p;
					}
				}
			}
		}
	return head;//����ֵΪhead 
	}

void print(struct Student *stu)//�������
	{
	struct Student *p;
	printf("Output Result:\n");
	for(p=stu;p!=NULL;p=p->next)
		{
			printf("%d %.2f\n",p->num,p->score);
		}
	}
