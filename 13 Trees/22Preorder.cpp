#include<stdlib.h>
#include<stdio.h>
#include "22Que.h"
struct Stack{
	int front;
	int size;
	struct Node **s;
};
struct Node *root=NULL;
void create(struct Stack *ptr)
{
	ptr->front=-1;
	ptr->size=100;
	ptr->s=(struct Node**)malloc(ptr->size*sizeof(struct Node*));
}
void treecreate()
{
	struct Node *p,*t;
	int x;
	struct Queu q;
	create(&q,100);
	printf("Enter the root value\n");
	scanf("%d",&x);
	root=(struct Node*)malloc(sizeof(struct Node));
	root->data=x;
	root->lchild=root->rchild=NULL;
	enque(&q,root);
	
	while(!isEmpty(q))
	{
		p=deque(&q);
		printf("Enter the left child of %d\n",p->data);
		scanf("%d",&x);
		if(x!=-1)
		{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=x;
		t->lchild=t->rchild=NULL;
		p->lchild=t;
		enque(&q,t);	
		}
		printf("Enter the right child of %d\n",p->data);
		scanf("%d",&x);
		if(x!=-1)
		{
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enque(&q,t);
		}
		
	}
}
int isEmpty(struct Stack s)
{
	if(s.front==-1)
	{
		return 0;
	}
	else{
		return 1;
	}
}
void push(struct Stack *ptr,struct Node *x)
{
	if(ptr->front==ptr->size-1)
	{
		printf("Stack is full\n");
	}
	else{
		ptr->front++;
		ptr->s[ptr->front]=x;
	}
}
struct Node* pop(struct Stack *ptr)
{
	struct Node *x=NULL;
	if(ptr->front==-1)
	{
		printf("Stack underflow\n");
	}
	else{
		x=ptr->s[ptr->front];
		ptr->front--;
	}
	return x;
}
void Ipreorder(struct Node *p)
{
	struct Stack st;
	create(&st);
	while(p!=NULL||isEmpty(st))
	{
		if(p!=NULL)
		{
			printf("%d",p->data);
			push(&st,p);
			p=p->lchild;
		}
		else{
			p=pop(&st);
			p=p->rchild;
		}
	}
	
}
int main()
{
	treecreate();
	Ipreorder(root);
	return 0;
}
