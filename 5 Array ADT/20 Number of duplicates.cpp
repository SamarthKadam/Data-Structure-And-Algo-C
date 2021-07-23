#include<stdio.h>
int main()
{
	int arr[50];
	int i;
	int j;
	int n;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			j=i+1;
			while(arr[j]==arr[i])
			{j++;}
			printf("%d element is repeating %d times\n",arr[i],j-i);
			i=j-1;
		}
	}
	
}
