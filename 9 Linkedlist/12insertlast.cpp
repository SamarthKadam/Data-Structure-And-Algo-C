#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *last=NULL;
void insert(int x)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=NULL;
	if(first==NULL)
	{
		first=last=t;
		
	}
	else{
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
int main()
{
	insert(22);
	insert(12);
	display(first);
	return 0;
}
