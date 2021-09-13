#include<stdio.h>
void insert(int arr[50],int n)
{
	int temp,i=n;
	temp=arr[n];
	while(i>1&&temp>arr[i/2])
	{
		arr[i]=arr[i/2];
		i=i/2;
	}
	arr[i]=temp;
	
}
int main()
{
	int arr[50];
	int i;
	int n;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insert(arr,n);
	for(i=1;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
