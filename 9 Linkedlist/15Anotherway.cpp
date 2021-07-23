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
void remove(struct Node *ptr)
{
	struct Node *back;
	struct Node *q=ptr->next;
	while(q!=NULL)
	{
		if(ptr->data!=q->data)
		{
			back=ptr;
			ptr=q;
			q=q->next;
		}
		else{
			back->next=ptr->next;
			free(ptr);
			ptr=q;
			q=q->next;
		}
	}
}
int main()
{
	int arr[]={10,20,20,30,40,50,50,50,60};
	create(arr,9);
	remove(first);
	display(first);
	return 0;
}
