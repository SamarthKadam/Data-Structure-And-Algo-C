#include<stdio.h>
int main()
{
	int temp;
	int n;
	int arr[20];
	int i,j;
	printf("Enter the size of you array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		while(arr[i]<0)
		{
			i++;
		}
		while(arr[j]>0)
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
}
