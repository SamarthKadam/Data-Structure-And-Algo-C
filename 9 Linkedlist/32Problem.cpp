#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
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
void middle()
{
	struct Node *p=first;
	struct Node *q=first;
	while(q!=NULL)
	{
		q=q->next;
		if(q)
		{
			q=q->next;
		}
		if(q)
		{
			p=p->next;
		}
	}
	printf("%d",p->data);
}
int main()
{
	int A[]={3,5,7,10,15};
	int n=5;
	create(A,n);
	middle();
	return 0;
}
