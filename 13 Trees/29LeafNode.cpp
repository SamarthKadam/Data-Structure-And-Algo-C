#include<stdlib.h>
#include<stdio.h>
#include "22Que.h"
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
int count1(struct Node *p)
{
	static int leaf=0;
	int x,y;
	if(p!=NULL)
	{
		x=count1(p->lchild);
		y=count1(p->rchild);
		if (!p->lchild && !p->rchild)
		{
			leaf++;
		}
	}
	return leaf;
}
int count(struct Node *p)
{
	int x,y;
	if(p!=NULL)
	{
		x=count(p->lchild);
		y=count(p->rchild);
		if (!p->lchild && !p->rchild)
		{
			return x+y+1;
		}
       else{
       return x+y;
	   }
	}
return 0;
}
int main()
{
	int answer;
	treecreate();
    answer=count(root);	
    printf("The no of leaf nodes are %d",answer);
	return 0;
}
