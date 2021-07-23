//This code calulate unknown element if the 0th indices has starting number 1 and sequence and sorted
//#include<stdio.h>
//int main()
//{
///	int arr[50];
//	int final;
//	int i;
//	int sum=0;
//	int n;
//	int l;
//	printf("Enter the size of your array\n");
//	scanf("%d",&l);
//	printf("Enter the elements\n");
//	for(i=0;i<l;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<l;i++)
//	{
//		sum=sum+arr[i];
//	}
//	n=arr[l-1];
//	n=(n*(n+1)/2);
//	final=n-sum;
///	printf("%d",final);
//	return 0;
//}
#include<stdio.h>//Element from nth term and shourld be sorted
int main()
{
	int arr[50];
	int n;
	int l;
	int diff;
	int i;
	printf("Enter the size of your aray\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	diff=arr[0]-0;
	for(i=0;i<n;i++)
	{
		if(arr[i]-i!=diff)
		{
			printf("Your missing element is %d",i+diff);
			break;
		}
	}
	return 0;
	
}
