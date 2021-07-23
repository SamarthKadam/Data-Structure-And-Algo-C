#include<stdio.h>
int main()
{
	int count ;
	int i;
	int j;
	int arr[50];
	int n;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Enter elements by one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		count=0;
		if(arr[i]!=-1)
		{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count=count+1;
				arr[j]==-1;
			}
		}
		if(count>=1)
	{
		printf("%d element has %d duplicates\n",arr[i],count);
	}
		}
	}
	return 0;
}
