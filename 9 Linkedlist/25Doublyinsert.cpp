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
void insert(struct Node *ptr,int value,int position)
{
	int i;
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=value;
	if(position==0)
	{
		t->next=first;
		t->prev=NULL;
		first->prev=t;
		first=t;
		
	}
	else{
		for(i=0;i<position-1;i++)
		{
			ptr=ptr->next;
		}
		t->next=ptr->next;
		t->prev=ptr;
		ptr->next=t;
		ptr->next->prev=t;
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
	insert(first,22,5);
	display(first);
	return 0;
}
