#include<stdio.h>
int main()
{
	int i;
	int arr[50];
	int n;
	int diff;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	diff=arr[0]-0;
	for(i=0;i<n;i++)
	{
		if((arr[i]-i)!=diff)
		{
			while(diff<arr[i]-i)
			{
				printf("%d\n",i+diff);
				diff++;
			}
		}
	}
	
	return 0;
	
	
}
