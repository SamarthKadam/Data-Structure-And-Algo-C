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
int remove(struct Node *ptr,int index)
{
	int i;
	int x;
	struct Node *run=NULL;
	struct Node *move;
	if(index==0)
	{
		move=first;
		x=first->data;
		first=first->next;
		free(move);
		return x;
	}
	else{
		
		for(i=0;i<index-1;i++)
		{
			run=ptr;
			ptr=ptr->next;
		}
		run->next=ptr->next;
		x=ptr->data;
		free(ptr);
		return x;
	}
}
int main()
{
	int value;
	int arr[]={10,20,30,40,50};
	create(arr,5);
	value=remove(first,3);
	printf("%d",value);
	return 0;
}
