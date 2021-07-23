//#include<stdio.h>//WE USE HASHING
//int main()
//{
//	int arr[50];
//	int n;
//	int i;
//	int j;
//	int k;
//	printf("Enter the no of elements\n");
//	scanf("%d",&n);
//	printf("Enter the element of that is k\n");
//	scanf("%d",&k);
//	printf("Enter the elements\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<n-1;i++)
///	{
//		for(j=i+1;j<n;j++)
///		{
//			if(arr[i]+arr[j]==k)
//			{
//				printf("%d + %d = %d\n",arr[i],arr[j],k);
//			}
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[50];
	int arr1[50];
	int n;
	int high=0;
	int i;
	int k;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Enter the sum that is k you want\n");
	scanf("%d",&k);
	printf("Enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>high)
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
		if(arr1[k-arr[i]]!=0)
		{
			printf("%d + %d = %d\n",arr[i],k-arr[i],k);
		}
		arr1[arr[i]]++;
	}////CHECK FOR THIS TEST CASE 10 ELEMENTS , SUM IS 10, AND ELEMENTS ARE 6 3 8 10 16 7 5 2 9 14
	
}

