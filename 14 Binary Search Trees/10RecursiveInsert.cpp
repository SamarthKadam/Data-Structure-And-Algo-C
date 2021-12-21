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
struct Node* Rinsert(struct Node *p,int key)
{
	struct Node *t=NULL;
	if(p==NULL)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=key;
		t->lchild=t->rchild=NULL;
		return t;
	}
	if(key<p->data)
	{
		p->lchild=Rinsert(p->lchild,key);
	}
	else if(key>p->data){
		p->rchild=Rinsert(p->rchild,key);
	}
	return p;
	
}
int Height(struct Node *p)
{
	int x,y;
	if(p==NULL)
	{
		return 0;
	}
	x=Height(p->lchild);
	y=Height(p->rchild);
	return x>y?x+1:y+1;
}
struct Node *InPre(struct Node *p)
{
	while(p && p->rchild!=NULL)
	{
		p=p->rchild;
	}
	return p;
}
struct Node *InSucc(struct Node *p)
{
	while(p && p->lchild!=NULL)
	{
		p=p->lchild;
	}
	return p;
}
struct Node *Delete(struct Node *p,int key)
{
	if(p==NULL)
	{
		return NULL;
	}
	if(p->lchild==NULL && p->rchild==NULL)
	{
		if(p==root)
		{
			root=NULL;
		}
		free(p);
		return NULL;
	}
	struct Node *q;
	if(key<p->data)
	{
		p->lchild=Delete(p->lchild,key);
	}
	else if(key>p->data)
	{
		p->rchild=Delete(p->rchild,key);
	}
	else{
		if(Height(p->lchild)>Height(p->rchild))
		{
			q=InPre(p->lchild);
			p->data=q->data;
			p->lchild=Delete(p->lchild,q->data);
		}
		else{
			q=InSucc(p->rchild);
			p->data=q->data;
			p->rchild=Delete(p->rchild,q->data);
			
		}
		
	}
	return p;
}
int main()
{
	struct Node *answer;
	root=Rinsert(root,10);
	Rinsert(root,5);
	Rinsert(root,20);
	Rinsert(root,8);
	Rinsert(root,30);
	Delete(root,5);
	inorder(root);
	printf("\n");
	answer=search(10);
	if(answer!=NULL)
	{
	printf("%d is present\n",answer->data);
    }
    else{
    	printf("Element is not found\n");
	}
	return 0;
}
