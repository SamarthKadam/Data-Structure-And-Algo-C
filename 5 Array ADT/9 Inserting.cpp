#include<stdio.h>
int function(int *arr,int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]>x)
		{
			return i;
		}
	}
}
int main()
{
	int value;
	int arr[20];
	int n;
	int i;
	int x;
	printf("which element you want to insert in the sorted array\n");
	scanf("%d",&x);
	printf("Enter the size of your aray\n");
	scanf("%d",&n);
	printf("Enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	value=function(arr,n,x);
	for(i=n-1;i>=value;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[value]=x;
	printf("New sorted array is \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
