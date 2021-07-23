#include<stdio.h>
#include<stdlib.h>
int n=7;///IN this situation
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
	do{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}while(ptr!=first);
}
void insert(struct Node *ptr,int pos,int value)
{
	int i;
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=value;
	if(pos==0)
	{	
		if(first==NULL)
		{
			first=t;
			first->next=first;
		}
		else{
			t->next=ptr;
			while(ptr->next!=first)
			{
				ptr=ptr->next;
			}
			ptr->next=t;
			first=t;
			
		}
	}
	else{
		if(pos>0 && pos<=n)
		{
		t->data=value;
		for(i=0;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		t->next=ptr->next;
		ptr->next=t;
	     }
	     else{
	     	return; 
		 }
	}
}
int main()
{
	int arr[]={2,4,6,7,9,10};
	create(arr,6);
	link(first);
	insert(first,0,22);
	insert(first,7,99);
	display(first);
	return 0;
	
}
