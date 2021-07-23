#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *first=NULL;
void create(int arr[],int n)
{
	int i;
	struct Node *last=NULL;
	struct Node *t;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
	first->prev=NULL;
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=arr[i];
		t->prev=last;
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int destroy(struct Node *ptr,int pos)
{
	int i;
	int x;
	if(pos==1)
	{
		x=ptr->data;
		first=first->next;
		free(ptr);
		if(first)
		{
		first->prev=NULL;
		return x;
	    }
	    else{
	    	return -1;
		}
		
	}
	else{
		for(i=0;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		x=ptr->data;
		ptr->prev->next=ptr->next;
		if(ptr->next)
		{
			ptr->next->prev=ptr->prev;
		}
		return x;
		
	}
}
int main()
{
	int value;
	int arr[]={9,2,3,4,5};
	create(arr,5);
	value=destroy(first,5);///if the the output is 1 in first pointer then it says that there is only one linked list
	printf("The element inside it is %d\n",value);
	display(first);
	return 0;
}
