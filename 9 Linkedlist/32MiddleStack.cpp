#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *top=NULL;
struct Node *last=NULL;
int values=0;
void create(int A[],int n)
{
	int i;
	struct Node *last;
	struct Node *q;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	first=t;
	t->data=A[0];
	t->next=NULL;
	last=t;
	
	for(i=1;i<n;i++)
	{
		q=(struct Node*)malloc(sizeof(struct Node));
		q->data=A[i];
		q->next=NULL;
		last->next=q;
		last=q;
	}
	
}
void push(int value)
{
	struct Node *s=(struct Node*)malloc(sizeof(struct Node));
	s->data=value;
	s->next=NULL;
	top=s;
	s->next=last;
	last=s;
}
int pop()
{
	struct Node *t;
	int x=top->data;
	t=top;
	top=top->next;
	last=last->next;
	free(t);
	return x;
}
void display()
{
	struct Node *ptr=top;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int middle()
{
	int i;
	struct Node *q=first;
	while(q!=NULL)
	{
		push(q->data);
		values=values+1;
		q=q->next;
	
	}
	int items=ceil(values/2);
	for(i=0;i<items;i++)
	{
		pop();
	}
	return pop();
}
int main()
{
	int A[]={1,2,3,4,5,6,7};
	int n=7;
	create(A,n);
	printf("The middle element is %d",middle());
	return 0;
}
