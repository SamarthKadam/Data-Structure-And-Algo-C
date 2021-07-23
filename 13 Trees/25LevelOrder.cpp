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
		return 1;
	}
	else{
		return 0;
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
void levelorder(struct Node *p)
{
	struct Queu q;
	create(&q,100);
	printf("%d",p->data);
	enque(&q,p);
	while(!isEmpty(q))
	{
		p=deque(&q);
		if(p->lchild)
		{
			printf("%d",p->lchild->data);
			enque(&q,p->lchild);
		}
		if(p->rchild)
		{
			printf("%d",p->rchild->data);
			enque(&q,p->rchild);
		}
		
	}
}
int main()
{
	treecreate();
	levelorder(root);
	return 0;
}
