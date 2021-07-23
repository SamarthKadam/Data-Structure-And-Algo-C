#include<stdio.h>
int function(int n,int r)
{
	if(r==0||n==r)
	{
		return 1;
	}
	else
	{
		return function(n-1,r-1)+function(n-1,r);
	}
}
int main()
{
	int value;
	int r;
	int n;
	printf("Enter the n value");
	scanf("%d",&n);
	printf("Enter the r value");
	scanf("%d",&r);
	value=function(n,r);
	printf("%d",value);
	return 0;
}
