/// C program to find using taylor seiries using recursion
#include<stdio.h>
float p=1;
float f=1;
float r;
float efun(int x, int y)
{
	if(y==0)
	{
		return 1;
	}
	else
	{
		r=efun(x,y-1);
		p=p*x;
		f=f*y;
		return r+p/f;
	}
}
int main()
{
	printf("%f",efun(4,15));
	return 0;
}
