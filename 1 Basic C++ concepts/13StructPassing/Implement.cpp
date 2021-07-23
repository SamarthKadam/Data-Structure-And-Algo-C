#include<stdio.h>
int i;
struct logic{
	int arr[55];
	int q;
};
void function(struct logic *ptr,int n)
{
	for(i=0;i<n;i++)
	{
	scanf("%d",&(*ptr).arr[i]);
}
}
void function1(struct logic *ptr,int n)
{
	for(i=0;i<n;i++)
	{
	    (*ptr).arr[i]=((*ptr).arr[i])* (*ptr).q;
	}
	for(i=0;i<n;i++)
	{
	    printf("%d\n",(*ptr).arr[i]);
	}
}
int main()
{

	int n;
	printf("Enter the size of your array");
	scanf("%d",&n);
	struct logic r;
	printf("Which number should be multiplied");
	scanf("%d",&r.q);
	struct logic *ptr=&r;
	function(ptr,n);
	function1(ptr,n);
	return 0;
	
}
