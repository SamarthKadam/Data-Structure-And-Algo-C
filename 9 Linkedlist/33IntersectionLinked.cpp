#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Stack{
	struct Node *add;
	struct Stack *nex;
};
 struct Node *first=NULL;
 struct Node *second=NULL;
 struct Stack *topA=NULL;
 struct Stack *topB=NULL;
void create(int A[],int n)
{
	struct Node *last;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	struct Node *p;
	t->data=A[0];
	t->next=NULL;
	first=t;
	last=t;
	int i;
	for(i=1;i<n;i++)
	{
		p=(struct Node*)malloc(sizeof(struct Node));
		p->data=A[i];
		p->next=NULL;
		last->next=p;
		last=p;
	}
	
}
struct Node* answer()
{
	struct Node *check=topA->add;
	while(topA->add==topB->add)
	{
		check=topA->add;
		topA=topA->nex;
		topB=topB->nex;
	}
	return check;
}

void display()
{
	struct Stack *p=topB;
	while(p!=NULL)
	{
		printf("%d\n",p->add->data);
		p=p->nex;
	}
}
void createM(int B[],int n)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	struct Node *p;
	struct Node *last;
	struct Node *carry;
	t->data=B[0];
	t->next=NULL;
	second=t;
	last=t;
	int i;
	for(i=1;i<n;i++)
	{
		p=(struct Node*)malloc(sizeof(struct Node));
		p->data=B[i];
		p->next=NULL;
		last->next=p;
		last=p;
	}
	
	carry=first;
	for(i=0;i<3;i++)
	{
		carry=carry->next;
	}
	last->next=carry;
}
void intersection()
{
	struct Stack *a;
	struct Stack *b;
	struct Node *p=first;
	struct Node *q=second;
	
	
		a=(struct Stack*)malloc(sizeof(struct Stack));
		a->add=p;
		a->nex=NULL;
		topA=a;
		p=p->next;
	while(p!=NULL)
	{
		b=(struct Stack*)malloc(sizeof(struct Stack));
		b->add=p;
		b->nex=topA;
		topA=b;
		p=p->next;
	}
	
	struct Stack *x;
	struct Stack *y;
	
	x=(struct Stack*)malloc(sizeof(struct Stack));
	x->add=q;
	x->nex=NULL;
	topB=x;
	q=q->next;
	
	while(q!=NULL)
	{
		y=(struct Stack*)malloc(sizeof(struct Stack));
		y->add=q;
		y->nex=topB;
		topB=y;
		q=q->next;
	}
	
}
int main()
{
	int n;
	struct Node* value;
	int A[]={7,4,3,8,9};
	n=5;
	create(A,n);
	int B[]={5,6};
	createM(B,2);
	intersection();
	value=answer();
	printf(" The interesection point is %d",value->data);
	return 0;
}
