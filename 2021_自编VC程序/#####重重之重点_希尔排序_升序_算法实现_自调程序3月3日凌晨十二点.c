#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
	{
		void ShellSort(int *a,int length);
		int a[10],i,len;
		srand(time(NULL));
		for(i=0;i<10;i++)
			a[i]=rand()%10;//�����������10��10���ڵ�����
		len=sizeof(a)/sizeof(a[0]);
		printf("Random number is:\n");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);//��������
		printf("\n");

		ShellSort(a,len);
		printf("Shell sort is:\n");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);//�������������
		printf("\n");
		return 0;
	}
void ShellSort(int *a,int length)
	{
		int i,j,h,temp;
		for(h=length/2;h>0;h/=2)//��ת�������������ָ�Ϊ����Ϊh��������
			for(i=h;i<length;i++)//������������
			{
				temp=a[i];
				for(j=i-h;j>=0;j-=h)//ǰ�����������
					if(temp<a[j])
						a[j+h]=a[j];//��ǰ����������в��ڴ��ں���Ĵ�����ֵʱ�������ڼ���ѭ���Ƚ�break
					else
						break;
				a[j+h]=temp;//����ǰԪ�ص���һ��Ԫ�ظ�ֵ����Ϊforѭ��ʱ���һ��j�Լ���һ��
			}
	}//ϣ������:�Ƚ����������з�Ϊ����������,���ζ������н���ֱ�Ӳ�������,�������л�����������������������ٽ���һ��ֱ�Ӳ�������