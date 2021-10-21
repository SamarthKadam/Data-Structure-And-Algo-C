#include<stdio.h>///All negatives to right side of the array
int main()
{
	int arr[20];
	int n;
	int i;
	int j;
	int temp;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		while(arr[i]>0 &&i<n)
		{
			i++;
		}
		while(arr[j]<0 && i>=0)
		{
			j--;
		}
		if(i<j)
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
       	}
	}
		for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
