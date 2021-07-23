#include<stdio.h>
int fib(int n)
{
	if(n<=1)
	{
		return n; 
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}
int main()
{
	int answer;
	int n;
	printf("Enter the  number");
	scanf("%d",&n);
	answer=fib(n);
	printf("%d",answer);
	return 0;
}
