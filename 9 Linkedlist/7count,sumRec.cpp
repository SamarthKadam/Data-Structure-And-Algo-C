#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int function(struct Node *first)
{
	if(first!=NULL)
	{
		return function(first->next)+1;
	}
	else{
		return 0;
	}
}
int function1(struct Node *first)
{
	if(first!=NULL)
	{
		return first->data+function1(first->next);
	}
	else{
		return 0;
	}
}
int main()
{
	int values;
	int sum;
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
	values=function(first);
	sum=function1(first);
	printf("The no of linked lists are %d\n",values);
	printf("The sum of linked list is %d",sum);
	
	return 0;
	
	
}
