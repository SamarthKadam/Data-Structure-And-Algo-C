#include<stdio.h>//finding missin element of unsorted array using hashing
int main()
{
	int arr[50];
	int arr1[50];
	int n;
	int i;
	printf("Enter the size of your aray\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int high=0;
	int low=arr[0];
	for(i=0;i<n;i++)
	{
		if(high<arr[i])
		{
			high=arr[i];
		}
		if(low>arr[i])
		{
			low=arr[i];
		}
	}
	
	for(i=0;i<=high;i++)
	{
		arr1[i]=0;
	}
	for(i=0;i<n;i++)
	{
		arr1[arr[i]]++;
		
	}
	for(i=low;i<=high;i++)
	{
		if(arr1[i]==0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
