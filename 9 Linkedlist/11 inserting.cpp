#include<stdio.h>  //Here's how I defined linked list 7 3 6 3 6 5 2 7   ///
#include<stdlib.h>                             
struct Node{
	int data;
	struct Node *next;
};
struct Node *first;
void create(int arr[],int n)
{
	int i;
	struct Node *temp=NULL;
	struct Node *last=NULL;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
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
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void insert(struct Node *ptr,int position,int value,int n)
{
	int i;
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=value;
	if(position<0 || position>n)
	{
		return;
	}
	if(position==0)
	{
		t->next=ptr;
		first=t;
	}
	else{
		for(i=0;i<position-1;i++)
		{
			ptr=ptr->next;
		}
		t->next=ptr->next;
		ptr->next=t;
		
	}
}
int main()
{
	int arr[]={1,2,5,6,7,2};
	int n=6;
	create(arr,n);///createing linked list
	insert(first,0,22,n);
	insert(first,4,21,n);;
	display(first);
	return 0;
}
