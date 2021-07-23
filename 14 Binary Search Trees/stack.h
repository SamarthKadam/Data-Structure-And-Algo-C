#include<stdio.h>
#include<stdlib.h>
#include "22Que.h"
struct Stack{
	int len;
	int top;
	struct Node **s;
};
struct Node{
	struct Node *lchild;
	int data;
	struct Node *rchild;
};
void createS(struct Stack *ptr,int size)
{
	ptr->s=(struct Node**)malloc(size*sizeof(struct Node*));
	ptr->top=-1;
}
struct Node* stackt(struct Stack *stk)
{
	struct Node *max;
	max->data=100;
	max->lchild=max->rchild=NULL;
	
	if(stk->top==-1)
	{
		return max;
		
	}
	else{
		return stk->s[stk->top];
	}
	
}
void push(struct Stack *ptr,struct Node *x )
{
	if(ptr->top==ptr->len-1)
	{
		printf("Stack overflow\n");
	}
	else{
		ptr->top++;
		ptr->s[ptr->top]=x;	
	}
	
	
}
void display(struct Stack q)
{
	int i;
	for(i=q.top;i>=0;i--)
	{
		printf("%d",q.s[i]);
	}
	printf("\n");
}
struct Node* pop(struct Stack *ptr)
{
	struct Node *x=NULL;
	if(ptr->top==-1)
	{
		printf("Stack underflow\n");
	}
	else{
		x=ptr->s[ptr->top];
		ptr->top--;
	}
	return x;
}
int isEmpty(struct Stack s)
{
	if(s.top==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct Stack s)
{
	if(s.top==s.len-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
