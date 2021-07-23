//Reduced approach of recursion of exponents
#include<stdio.h>
int fun(int m, int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	{
	 return  fun(m*m,n/2);
	}
	else if(n%2==1)
	{
		return m*fun(m*m,(n-1)/2);
		
	}
	
}
int main()
{
	int an;
	an=fun(2,9);
	printf("%d",an);
	return 0;
}
