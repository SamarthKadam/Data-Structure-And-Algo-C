#include<stdio.h>
int fun(int a,int b)
{
	int q;
	if(b==0)
	{
		return 1;
	}
	else
	{
		q=a*fun(a,b-1);
	}
	return q;
}
int main()
{
	int answer;
	answer=fun(2,4);
	printf("%d",answer);
	return 0;
}
