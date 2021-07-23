#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void function(struct Node *first)
{
	if(first!=NULL)
	{
		printf("%d",first->data);
		function(first->next);
	}
}
int main()
{
	int i;
	int arr[]={2,5,2,3,4,5};
	int n=6;
	struct Node *first=NULL;
	struct Node *temp=NULL;
	struct Node *last=NULL;
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
	function(first);
	return 0;
	
	
}
