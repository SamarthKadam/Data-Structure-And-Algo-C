#include<stdio.h>
int main()
{
	int high;
	int i;
	int arr[50];
	int arr1[50];
	int n;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	high=arr[0];
	for(i=0;i<n;i++)
	{
		if(high<arr[i])
		{
			high=arr[i];
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
	for(i=0;i<= high;i++)
	{
		if(arr1[i]>1)
		{
			printf("%d element repeats %d times",i,arr1[i]);
		}
	}
	return 0;
}
