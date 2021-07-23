#include<stdio.h>
double fun(int x,int n)
{
	static double s=1;
	if(n==0)
	{
		return s;
	}
	else{
		s=1+x*s/n;
		fun(x,n-1);
	}
}
int main()
{
	printf("%lf",fun(1,10));
	return 0;
}
