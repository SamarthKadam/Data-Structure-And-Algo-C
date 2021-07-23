#include<stdio.h>
int main()
{
	int eff=0;
	int sum=0;
	int i=0;
	int k=0;
	int j=0;
	int m;
	int n;
	int A[100];
	int B[100];
	int C[100];
	printf("Enter the size of 1st array\n");
	scanf("%d",&m);
	printf("Enter the size of 2nd array\n");
	scanf("%d",&n);
	sum=m+n;
	printf("Enter the 1st  array elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the 2nd array elements\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&B[j]);
	}
	i=0;
	j=0;
	while(i<m&&j<n)
	{
		if(A[i]<B[j])
		{
			eff=eff+1;
			C[k]=A[i];
			k++;
			i++;
		}
		else if(A[i]>B[j])
		{
			j++;
		}
		else if(A[i]==B[j])
		{
			j++;
			i++;
		}
	}
	printf("\n");
	for(k=0;k<eff;k++)
	{
		printf("%d\n",C[k]);
	}
	return 0;
}
