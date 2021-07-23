#include<stdio.h>///TIP=something initilized in the main function gets replicated in every user defined fucntion
#include<stdlib.h>
struct Array{
	int *A;
	int lenght;
	int size;
};
void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.lenght;i++)
	{
		printf("%d\n",arr.A[i]);
	}
	printf("%d",size);
}
int main()
{
	int i;
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	struct Array arr;
	arr.A=(int*)malloc(n*sizeof(int));
	arr.lenght=0;
	
	printf("Enter the numbers one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.lenght=n;
	display(arr);
}
