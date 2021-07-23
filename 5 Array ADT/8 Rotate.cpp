#include<stdio.h>
int main()
{
	int x;
	int arr[20];
	int item;
	int i;
	int n;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("How much times you want to perform your left shift operation\n");
	scanf("%d",&x);
	printf("Now enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
		way:
		item=arr[0];
		for(i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=item;
		x--; 
		if(x>0)
		goto way;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
