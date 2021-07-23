#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *second=NULL;
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
void linking(struct Node *ptr)
{
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=second;
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n;
	int arr1[]={11,33,44,55};
	int n1;
	create(arr,6);
	createseco(arr1,4);
	linking(first);
	display(first);
	return 0;
	
}
