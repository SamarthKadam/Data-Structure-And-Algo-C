#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
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
void link(struct Node *ptr)
{
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=first;
}
void display(struct Node *ptr)
{
	static int flag=0;
	if(ptr!=first||flag==0)
	{
		flag=1;
		printf("%d",ptr->data);
		display(ptr->next);
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n;
	create(arr,6);
	link(first);
	display(first);
	return 0;
	
}
