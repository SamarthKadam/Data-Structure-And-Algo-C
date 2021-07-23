#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
struct Node *root=NULL;
void create(int pre[100],int n)
{
	struct Node *p;
	struct Stack stk;
	createS(&stk,100);
	struct Node *t;
	int i=0;
	root=(struct Node*)malloc(sizeof(struct Node));
	root->data=pre[i++];
	root->lchild=root->rchild=NULL;
	p=root;
	
	while(i<n)
	{
		if(pre[i]<p->data)
		{
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=pre[i++];
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			push(&stk,p);
			p=t;
		}
		else 
		{
         if(pre[i]>p->data&&pre[i]<(stackt(&stk))->data)
		{
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=pre[i++];
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			p=t;
			
		}
		else{
			p=pop(&stk);
		}
	}
}
}
void preorder(struct Node *p)
{
	if(p)
	{
		printf("%d\n",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void inorder(struct Node *p)
{
	if(p)
	{
		inorder(p->lchild);
		printf("%d",p->data);
		inorder(p->rchild);
	}
}
int main()
{
	int arr[100]={30,20,10,15,25,40,50,45};
	create(arr,8);
	preorder(root);
	printf("\n");
	inorder(root);
	return 0;
}
