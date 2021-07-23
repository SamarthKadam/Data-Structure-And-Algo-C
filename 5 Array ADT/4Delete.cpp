#include<stdio.h>
struct Array{
	int arr[10];
	int lenght;
};
void function(struct Array *ptr,int x)
{
	int i;
	for(i=x;i<(*ptr).lenght-1;i++)
	{
		(*ptr).arr[i]=(*ptr).arr[i+1];
	}
	(*ptr).lenght--;
	
}
void display(struct Array list)
{
	int i;
	for(i=0;i<list.lenght;i++)
	{
		printf("%d",list.arr[i]);
	}
}
int main()
{
	int i;
	int n;
	int x;
	struct Array list;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Which index you want to delete\n");
	scanf("%d",&x);
	printf("Enter the element one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&list.arr[i]);
	}
	list.lenght=n;
	function(&list,x);
	display(list);
	return 0;
}

