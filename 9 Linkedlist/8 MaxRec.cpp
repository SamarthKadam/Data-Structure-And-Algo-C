#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int sum(struct Node *ptr,int n)
{
	int x=0;
	if(ptr==0)
	{
		return 0;
	}
	else{
		x=sum(ptr->next,n);
	 if(ptr->data<x)
	 {
	 	return x;
	 }		
	 else{
	 	return ptr->data;
	 }
	 			 
	}
	
}
int main()
{
	int high;
	int i;
	int n;
	int arr[]={3,5,6,7,8,1};
	n=6;
	struct Node *head=NULL;
	struct Node *temp=NULL;
	struct Node *last=NULL;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	head->data=arr[0];
	head->next=NULL;
	last=head;
	
	for(i=1;i<n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
   high=sum(head,n);
   printf("The highest value of the linked list is %d",high);
   return 0;
}
