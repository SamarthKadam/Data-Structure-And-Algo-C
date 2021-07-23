#include<stdio.h>
int sum;
struct Array{
	int arr[10];
	int lenght;
};
void function(struct Array *ptr)
{
	int i;
	printf("Enter the elements one by one\n");
	for(i=0;i<(*ptr).lenght;i++)
	{
		scanf("%d",&(*ptr).arr[i]);
	}
}
int recursion(struct Array a,int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		sum=a.arr[n]+recursion(a,n-1);
		return sum;
	}
	
}
int main()
{
	int value;
	int n;
	struct Array a;
	printf("Enter the size of your array\n");
	scanf("%d",&a.lenght);
	n=a.lenght;
	function(&a);
	value=recursion(a,n-1);
	printf("Sum of your array is %d",value);
	return 0;
}
