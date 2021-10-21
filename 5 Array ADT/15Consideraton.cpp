#include<stdio.h>
int main()
{
	int A[100];
	int B[100];
	int C[100];
	int x,y,z;
	int lenght=0;
	int i,j,k;
	int sum;
	printf("Enter the number of rows for 1st array\n");
	scanf("%d",&x);
	printf("Enter the number of rows for 2nd array\n");
	scanf("%d",&y);
	sum=x+y;
	printf("Enter the elements one by one for 1st array\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Now for the 2nd array\n");
	for(i=0;i<y;i++)
	{
		scanf("%d",&B[i]);
	}
	i=0,j=0,k=0;
	
	A[x]=10000;
	B[y]=10000;
	while(i<=x&&j<=y)
	{
		if(A[i]>B[j])
		{
			j++;
			
		}
		else if(A[i]<B[j])
		{
			lenght=lenght+1;
			C[k]=A[i];
			i++;
			k++;
			
		}
		else if(A[i]==B[j])
		{
		i++;
		j++;
		}
		
	}
//	for(;i<x;i++)
//	{
//		C[k]=A[i];
//		k++;
//	}
//	for(;j<y;j++)
//	{
//		C[k]=B[j];
//		k++;
//	}
	printf("\n");
	for(i=0;i<lenght;i++)
	{
		printf("%d\n",C[i]);
	}
	return 0;
	
}
