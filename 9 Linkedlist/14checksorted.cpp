#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first;
void create(int arr[],int n)
{
	int i;
	struct Node *t;
	struct Node *last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=arr[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
	
}
int check(struct Node *ptr)
{
	int x=-3232;
	while(ptr!=NULL)
	{
		if(ptr->data<x)
		{
			return -1;
		}
		x=ptr->data;
		ptr=ptr->next;
	}
	return 0;
}
int main()
{
	int value;
	int arr[]={10,20,30,40,50};
	create(arr,5);
	value=check(first);
	printf("%d",value);
	return 0;
}
