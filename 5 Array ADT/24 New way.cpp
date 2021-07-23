#include<stdio.h>//pari of sum of sorted array
int main()
{
	int arr[50];
	int n;
	int i;
	int k;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Enter the sum of result that is k\n");
	scanf("%d",&k);
	printf("Enter all the elmenets one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j;
	j=n-1;
	i=0;
	while(i<j)
	{
		if(arr[i]+arr[j]==k)
		{
			printf("%d + %d = %d\n",arr[i],arr[j],k);
			i++;
			j--;
		}
		else if(arr[i]+arr[j]<k)
		{
			i++;
		}
		else{
			j--;
		}
		
	}
	
}

