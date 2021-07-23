/*Above program gives a a array in return using pointer*/
#include<stdio.h>
#include<stdlib.h>
int* function(int n)//This function returns address of pointer pointing to the base of the array file or int[];
{
	int*p;
	p=(int*)malloc(n*(sizeof(int)));
	return p;
}
int main()
{
	int n;
	int i;
	int *A;//This is a pointer holding a adress
	printf("Enter the size of your array");
	scanf("%d",&n);
	A=function(n);///Here we call the function to bring the array base address from heap
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(A+i));
	}
	
}
