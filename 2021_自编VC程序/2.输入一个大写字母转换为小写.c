#include"stdio.h"
void main()
{
char c;
printf("������һ����д��ĸ��");
scanf("%c",&c);
if(c>=65 && c<=90)
	{printf("��д��ĸת��Сд��ĸ!\n");
	printf("ԭ��ĸΪ��%c\n��ӦСд��ĸΪ��%c\n",c,c+32);}
else
	printf("�������!\n");

}