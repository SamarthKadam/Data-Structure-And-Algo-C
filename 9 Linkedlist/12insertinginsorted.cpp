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
insert(struct Node *ptr,int x)
{
	struct Node *trace=NULL;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=NULL;
	if(first==NULL)
	{
		first=t;///exceptional case in inserting as we have given the array
	}
	else
	{
		while(ptr && ptr->data<x)
		{
			trace=ptr;
			ptr=ptr->next;
		}
		if(ptr==first)
		{
			t->next=ptr;
			first=t;
		}
		else{
		t->next=trace->next;
		trace->next=t;
		}
	}
}

int main()
{
	int arr[]={10,20,30,40,50};
	create(arr,5);
	insert(first,33);
	display(first);
	return 0;
}
