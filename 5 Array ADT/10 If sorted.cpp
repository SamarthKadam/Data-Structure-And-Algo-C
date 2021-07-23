#include<stdio.h>
int main()
{
	int n;
	int i;
	int arr[20];
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
	
	if(arr[i]>arr[i+1])
	{
		printf("No");
		return 0;
	}
}
   printf("yes");
	return 0;
}
