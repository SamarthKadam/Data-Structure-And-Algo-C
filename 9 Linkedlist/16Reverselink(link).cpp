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
display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void reverse(struct Node *ptr)
{
	struct Node *r=NULL;
	struct Node *q=NULL;
	while(ptr!=NULL)
	{
		r=q;
		q=ptr;
		ptr=ptr->next;
		q->next=r;
	}
	first=q;
}

int main()
{
	int arr[]={10,20,30,40,50};
	create(arr,5);
	reverse(first);
	display(first);
	return 0;
}
