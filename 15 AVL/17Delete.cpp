#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *lchild;
	struct Node *rchild;
	int data;
	int height;
};
struct Node *root=NULL;
int NodeHeight(struct Node *p)
{
	int hl;
	int hr;
	hl=p && p->lchild?p->lchild->height:0;
	hr=p && p->rchild?p->rchild->height:0;
	
	return hl>hr?hl+1:hr+1;
	
}
int BalanceFactor(struct Node *p)
{
	int hl;
	int hr;
	hl=p && p->lchild?p->lchild->height:0;
	hr=p && p->rchild?p->rchild->height:0;
	return hl-hr;
	
}
struct Node* LLRotation(struct Node *p)
{
	struct Node *pl=p->lchild;
	struct Node *plr=pl->rchild;
	
	pl->rchild=p;
	p->lchild=plr;
	p->height=NodeHeight(p);
	pl->height=NodeHeight(pl);
	
	if(root==p)
	{
		root=pl;
	}
	return pl;
}
struct Node* LRRotation(struct Node *p)
{
	struct Node *pl=p->lchild;
	struct Node *plr=pl->rchild;
	
	pl->rchild=plr->lchild;
	p->lchild=plr->rchild;
	
	plr->lchild=pl;
	plr->rchild=p;
	
	pl->height=NodeHeight(pl);
	p->height=NodeHeight(p);
	plr->height=NodeHeight(plr);
	
	if(p==root)
	{
		root=plr;
	}
	return plr;
	
}
struct Node* RRRotation(struct Node *p)
{
	struct Node* pr=p->rchild;
	struct Node* prl=pr->lchild;
	pr->lchild=p;
	p->rchild=prl;
	p->height=NodeHeight(p);
	pr->height=NodeHeight(pr);
	if(root==p)
	{
		root=pr;
	}
	return pr;
}
struct Node* RLRotation(struct Node *p)
{
	struct Node* pr=p->rchild;
	struct Node* prl=pr->lchild;
	
	pr->lchild=prl->rchild;
	p->rchild=prl->lchild;
	prl->lchild=p;
	prl->rchild=pr;
	
	p->height=NodeHeight(p);
	pr->height=NodeHeight(pr);
	prl->height=NodeHeight(prl);
	
	if(p==root)
	{
		root=prl;
	}
	return prl;
}
struct Node* Rinsert(struct Node *p,int key)
{
	struct Node *t=NULL;
	if(p==NULL)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=key;
		t->height=1;
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
	
	p->height=NodeHeight(p);
	
	
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
	{
	 return LLRotation(p);
	}
	else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
	{
	 return LRRotation(p);
	}
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
	{
	 return RRRotation(p);
	}
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1)
	{
	 return RLRotation(p);
	}
		
	return p;
	
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
struct Node* Delete(struct Node *p,int key)
{
	 if (p == NULL){
        return NULL;
    }
 
    if (p->lchild == NULL && p->rchild == NULL){
        if (p == root){
            root = NULL;
        }
        free(p);
        return NULL;
    }
 
    if (key < p->data){
        p->lchild = Delete(p->lchild, key);
    } else if (key > p->data){
        p->rchild = Delete(p->rchild, key);
    } else {
        struct Node* q;
        if (NodeHeight(p->lchild) > NodeHeight(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        } else {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
 
    // Update height
    p->height = NodeHeight(p);
 
    // Balance Factor and Rotation
    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1) {  // L1 Rotation
        return LLRotation(p);
    } else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1){  // L-1 Rotation
        return LRRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1){  // R-1 Rotation
        return RRRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1){  // R1 Rotation
        return RLRotation(p);
    } else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 0){  // L0 Rotation
        return LLRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 0){  // R0 Rotation
        return RRRotation(p);
    }
 
    return p;
}
///This code is same as that for deleting bst for deletion
int main()
{
	root=Rinsert(root,10);
	Rinsert(root,20);
	Rinsert(root,30);
	Rinsert(root,40);
	Delete(root,10);
	preorder(root);
	return 0;
}
