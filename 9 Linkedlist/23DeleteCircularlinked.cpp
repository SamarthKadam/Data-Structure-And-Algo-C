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
int remove(struct Node *head,int pos)
{
	int x;
	struct Node *p=first;
	if(pos==1)
	{
		while(p->next!=first)
		{
			p=p->next;
		}
		x=head->data;
		if(p==head)
		{
			free(head);
			head=NULL;
		}
		else{
			p->next=head->next;
			free(head);
			head=p->next;
		}
	}
	else{
		p=NULL;
		head=first;
		for(int i=0;i<pos-2;i++)
		{
			head=head->next;
		}
		p=head->next;
		x=p->data;
		head->next=p->next;
		free(p);
			
		}
	return x;
}

int main()
{
	int value;
	int arr[]={2,4,6,7,9,10};
	create(arr,6);
	link(first);
	value=remove(first,3);
	printf("%d",value);
	return 0;
	
}
