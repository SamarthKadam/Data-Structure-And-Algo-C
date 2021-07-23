#include<stdio.h>
int F[10];
int mfib(int n)
{
	if(n<=1)
	{
		if(F[n]==-1)
		{
			F[n]=n;
			return F[n];//or return n
		}
	}
	else
	{
		if(F[n-2]==-1)
		{
			F[n-2]=mfib(n-2);
		}
		if(F[n-1]==-1)
		{
			F[n-1]=mfib(n-1);
		}
		return F[n-2]+F[n-1];
	}
	
}
int main()
{
	int i;
	int value;
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		F[i]=-1;
	}
	value=mfib(n);
	printf("%d",value);
	return 0;
	
}
