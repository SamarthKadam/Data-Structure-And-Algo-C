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
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void insert(struct Node *ptr,int index,int value)
{
	struct Node *onea;
	onea=(struct Node*)malloc(sizeof(struct Node));
	onea->data=value;
	if(index==0)
	{
		onea->next=first; ///////////////////////////////////or we can write onea->next=ptr(because ptr and first are pointing to same object
		first=onea;
	}
	else{
		for(int i=0;i<index-1;i++)
		{
			ptr=ptr->next;
		}
		onea->next=ptr->next;
		ptr->next=onea;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n;
	create(arr,6);
	insert(first,0,14);
	insert(first,2,99);
	display(first);
	return 0;
	
}
