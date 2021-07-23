#include<stdio.h>////For deleting don't start index for 0 ,start it from 1 like you should ask user which node you want to delte
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
	do
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}while(ptr!=first);
}
void circular(struct Node *ptr)
{
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=first;
	first->prev=ptr;
}
int remove(struct Node *ptr,int pos)
{
	int i;
	int x;
	if(pos==1)
	{
		x=ptr->data;
		ptr->next->prev=ptr->prev;
		ptr->prev->next=ptr->next;
		first=ptr->next;
		ptr->prev=NULL;
		ptr->next=NULL;
		free(ptr);
		return x;
	}
	else{
		for(i=0;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		x=ptr->data;
		ptr->prev->next=ptr->next;
		ptr->next->prev=ptr->prev;
		free(ptr);
		return x;
	}
}
int main()
{
	int value;
	int arr[]={1,2,3,4,5};
	create(arr,5);
	circular(first);
	value=remove(first,5);
	printf("The node is deletd successfully and the value we found inside it is %d\n",value);
	display(first);
	return 0;
	
}
