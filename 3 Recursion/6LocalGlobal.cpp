#include<stdio.h>///Understanding how exactly recursion works on basis of global local and static variable
int a=0;
int f=0;
int fun(int n)
{
	a++;
	if(n>0)
	{
		return fun(n-1)+a;          //1st way 
		
	}
	return 0;
}
int fun1(int n)
{
	int t=0;
	if(n>0)                             //2nd way
	{
		t++;
		return fun1(n-1)+t;
	}
}
int fun2(int n)
{
	if(n>0)                                       ///3rd way
	{
		f++;
		return fun2(n-1)+f;
	}
}
int main()
{
	int q;
	int r;
	int s;
	r=fun(5);
	printf("%d\n",r);
	q=fun1(5);
	printf("%d\n",q);
	s=fun2(5);
	printf("%d",s);
	return 0;
	
}
