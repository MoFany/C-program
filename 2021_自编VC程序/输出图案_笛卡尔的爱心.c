#include<stdio.h>
#include<math.h>
//#include<windows.h>
void Love_Fun()//µÑ¿¨¶û°®ÐÄ·½³Ì
	{
		float a,x,y;
		for(x=1.5f;x>-1.5f;x-=0.1f)
		{
			for(y=-1.5f;y<1.5f;y+=0.05f)
			{
				a=x*x+y*y-1;
				putchar(a*a*a-y*y*x*x*x<=0.0f?'*':'\040');
			}
		putchar(10);
		}
	}
int main()
	{
		Love_Fun();
		return 0;
	}