#include<stdio.h>
int main()
{
	int arr[50];
	int n;
	int high;
	int min;
	int i;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	high=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		else if (arr[i]>high)
		{
			high=arr[i];
		}
		
	}
	printf("%d %d",min,high);
	return 0;
}

