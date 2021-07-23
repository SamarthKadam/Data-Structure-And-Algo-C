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
void reverse(struct Node *ptr)
{
	int arr[20];
	int i=0;
	while(ptr!=NULL)
	{
		arr[i]=ptr->data;
		ptr=ptr->next;
		i++;
	}
	i--;
	ptr=first;
	while(ptr!=NULL)
	{
		ptr->data=arr[i];
		ptr=ptr->next;
		i--;
	}
}

int main()
{
	int arr[]={10,20,30,40,50};
	create(arr,5);
	reverse(first);
	display(first);
	return 0;
}
