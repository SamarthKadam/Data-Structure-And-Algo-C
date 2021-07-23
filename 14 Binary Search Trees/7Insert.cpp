#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *lchild;
	int data;
	struct Node *rchild;
};
struct Node *root=NULL;
void insert(int key)
{
	struct Node *t=root;
	struct Node *r,*p;
	if(root==NULL)
	{
		p=(struct Node*)malloc(sizeof(struct Node));
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->data)
		{
			t=t->lchild;
		}
		else if(key>t->data)
		{
			t=t->rchild;
		}
		else{
			return;
		}
	}
	    p=(struct Node*)malloc(sizeof(struct Node));
		p->data=key;
		p->lchild=p->rchild=NULL;
		if(key<r->data)
		{
			r->lchild=p;
		}
		else if(key>r->data)
		{
			r->rchild=p;
		}
	
}
void inorder(struct Node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->lchild);
		printf("%d",ptr->data);
		inorder(ptr->rchild);
	}
}
struct Node* search(int key)
{
	struct Node *t=root;
	while(t!=NULL)
	{
		if(key==t->data)
		{
			return t;
		}
		else if(key<t->data)
		{
			t=t->lchild;
		}
		else if(key>t->data)
		{
			t=t->rchild;
		}
	}
	return NULL;
	
}
int main()
{
	struct Node *answer;
	insert(10);
	insert(5);
	insert(20);
	insert(8);
	insert(30);
	inorder(root);
	printf("\n");
	answer=search(20);
	if(answer!=NULL)
	{
	printf("%d is present\n",answer->data);
    }
    else{
    	printf("Element is not found\n");
	}
	return 0;
}
