#include<stdio.h>
int main()
	{
	int a[3][4],i,j;
	int *pointer_1;
	printf("�����ά�����Ԫ�أ�");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",(*(a+i)+j));
	printf("�����ά�����Ԫ�أ�");
//	for(pointer_1=*a;pointer_1<a[0]+4;pointer_1++)
//		printf("%d  ",*pointer_1);
//	for(pointer_1=*(a+1);pointer_1<a[1]+4;pointer_1++)
//		printf("%d ",*pointer_1);
//	for(pointer_1=*(a+2);pointer_1<a[2]+4;pointer_1++)
//		printf("%d ",*pointer_1);
/*---------------��������forѭ���ȼ����������Ƕ�׵�forѭ��---------------------*/
	for(i=0;i<3;i++)
		for(pointer_1=*(a+i);pointer_1<a[i]+4;pointer_1++)
			printf("%d ",*pointer_1);
	printf("\n");
	return 0;
	}
