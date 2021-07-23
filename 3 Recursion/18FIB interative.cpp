#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int i;
	int start=0;
	int end=1;
	int sum=0;
	if(n==1||n==0)
	{
		printf("%d",n);
	}
	else{
	
	for(i=2;i<=n;i++)
	{
		sum=start+end;
		start=end;
		end=sum;
	}
	printf("%d",sum);
}
	return 0;
}
