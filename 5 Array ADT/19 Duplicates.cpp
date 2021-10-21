#include<stdio.h>
int main()
{
	int arr[50];
	int n;
	int duplicate=0;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	int i;
	printf("Enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1] && duplicate!=arr[i+1])
		{
			printf("%d\n",arr[i]);
			duplicate=arr[i];
		}
	}
	return 0;
}
