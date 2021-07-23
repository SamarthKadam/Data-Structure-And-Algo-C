#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *first=NULL;
void create(int arr[],int n)
{
	int i;
	struct Node *last=NULL;
	struct Node *t;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
	first->prev=NULL;
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=arr[i];
		t->prev=last;
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	create(arr,5);
	display(first);
	
}
