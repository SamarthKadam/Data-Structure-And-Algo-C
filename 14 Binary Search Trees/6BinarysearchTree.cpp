#include<stdlib.h>
#include<stdio.h>
#include "22Que.h"
struct Node{
	struct Node *lchild;
	int data;
	struct Node *rchild;
};
struct Node *root=NULL;
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
void preorder(struct Node *p)
{
	if(p)
	{
		printf("%d",p->data);
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
void postorder(struct Node *p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d",p->data);
	}
}
Node* search(struct Node *ptr,int key)
{
	while(ptr!=NULL)
	{
	if(key==ptr->data)
	{
		return ptr;
	}
	else if(key<ptr->data)
	{
		ptr=ptr->lchild;
	}	
	else{
		ptr=ptr->rchild;
	}
	}
	return NULL;
}
int main()
{
	int key;
	struct Node *answer;
	treecreate();
	scanf("%d",&key); 
    answer=	search(root,key);
    printf("%d Element found",answer->data);
	return 0;
}
