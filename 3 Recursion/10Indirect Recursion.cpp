///Indirect recursion is a process where A function call B and B function calls A indirectly it is a loop calling itself indirectly
#include<stdio.h>
void funa(int n);
void funb(int n);
void funa(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		funb(n-1);
	}
}
void funb(int n)
{
	if(n>1)
	{
		printf("%d\n",n);
		funa(n/2);
	}
}
int main()
{
	funa(20);
	return 0;
}
