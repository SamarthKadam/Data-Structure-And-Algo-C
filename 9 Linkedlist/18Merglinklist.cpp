#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *second=NULL;
struct Node *third=NULL;
void create(int arr[],int n)
{
	int i;
	struct Node *temp;
	struct Node *last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	
}
void createseco(int arr1[],int n)
{
	int i;
	struct Node *temp;
	struct Node *last;
	second=(struct Node*)malloc(sizeof(struct Node));
	second->data=arr1[0];
	second->next=NULL;
	last=second;
	for(i=1;i<n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=arr1[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void Merge(struct Node *p,struct Node *q)
{
	struct Node *last=NULL;
	if(p->data<q->data)
	{
		third=last=p;
		p=p->next;
		third->next=NULL;
	}
	else{
		third=last=q;
		q=q->next;
		third->next=NULL;
	}
	while(p&&q)   ///p mean p!=NULL;
	{
		if(p->data<q->data)
		{
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
		}
		else{
			last->next=q;
			last=q;
			p=p->next;
			last->next=NULL;
		}
		
	}
	if(p)
	{
		last->next=p;
	}
	else{
		last->next=q;
	}
}
int main()
{
	int arr[]={1,2};
	int n;
	int arr1[]={11,33,44,55};
	int n1;
	create(arr,2);
	createseco(arr1,4);
	Merge(first,second);
	display(third);
	return 0;
	
}
