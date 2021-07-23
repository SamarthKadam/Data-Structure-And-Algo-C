#include<stdio.h>
struct Array {
	int arr[10];
	int lenght;
};
void function(struct Array *ptr)
{
	int i;
	printf("Now please enter the numbers one by one\n");
	for(i=0;i<(*ptr).lenght;i++)
	{
		scanf("%d",&(*ptr).arr[i]);
	}
}
void function1(struct Array *ptr,int x, int y)
{
	int i;
	(*ptr).lenght++;
	for(i=(*ptr).lenght;i>y;i--)
	{
		(*ptr).arr[i]=(*ptr).arr[i-1];
	}
	(*ptr).arr[y]=x;
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
	struct Array list;
	int n;
	int x;
	int y;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("User Please enter which number you want to place at which index\n ");
	scanf("%d",&x);
	printf("At what index\n");
	scanf("%d",&y);
	list.lenght=n;
	function(&list);
	function1(&list,x,y);
	display(list);
	return 0;
}
